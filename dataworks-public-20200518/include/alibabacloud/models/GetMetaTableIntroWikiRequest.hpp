// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEINTROWIKIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEINTROWIKIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableIntroWikiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableIntroWikiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(WikiVersion, wikiVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableIntroWikiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(WikiVersion, wikiVersion_);
    };
    GetMetaTableIntroWikiRequest() = default ;
    GetMetaTableIntroWikiRequest(const GetMetaTableIntroWikiRequest &) = default ;
    GetMetaTableIntroWikiRequest(GetMetaTableIntroWikiRequest &&) = default ;
    GetMetaTableIntroWikiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableIntroWikiRequest() = default ;
    GetMetaTableIntroWikiRequest& operator=(const GetMetaTableIntroWikiRequest &) = default ;
    GetMetaTableIntroWikiRequest& operator=(GetMetaTableIntroWikiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tableGuid_ != nullptr
        && this->wikiVersion_ != nullptr; };
    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetMetaTableIntroWikiRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // wikiVersion Field Functions 
    bool hasWikiVersion() const { return this->wikiVersion_ != nullptr;};
    void deleteWikiVersion() { this->wikiVersion_ = nullptr;};
    inline int64_t wikiVersion() const { DARABONBA_PTR_GET_DEFAULT(wikiVersion_, 0L) };
    inline GetMetaTableIntroWikiRequest& setWikiVersion(int64_t wikiVersion) { DARABONBA_PTR_SET_VALUE(wikiVersion_, wikiVersion) };


  protected:
    // The GUID of the metatable.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableGuid_ = nullptr;
    // The version of the instructions.
    std::shared_ptr<int64_t> wikiVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
