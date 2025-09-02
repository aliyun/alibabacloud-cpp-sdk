// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMETATABLEINTROWIKIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMETATABLEINTROWIKIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateMetaTableIntroWikiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMetaTableIntroWikiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMetaTableIntroWikiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
    };
    UpdateMetaTableIntroWikiRequest() = default ;
    UpdateMetaTableIntroWikiRequest(const UpdateMetaTableIntroWikiRequest &) = default ;
    UpdateMetaTableIntroWikiRequest(UpdateMetaTableIntroWikiRequest &&) = default ;
    UpdateMetaTableIntroWikiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMetaTableIntroWikiRequest() = default ;
    UpdateMetaTableIntroWikiRequest& operator=(const UpdateMetaTableIntroWikiRequest &) = default ;
    UpdateMetaTableIntroWikiRequest& operator=(UpdateMetaTableIntroWikiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->tableGuid_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateMetaTableIntroWikiRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline UpdateMetaTableIntroWikiRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


  protected:
    // The details of the instructions on how to use the metatable.
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // The GUID of the table. Specify the GUID in the odps.{projectName}.{tableName} format.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableGuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
