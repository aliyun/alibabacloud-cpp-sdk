// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIBRARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIBRARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLibraryRequestIndexSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateLibraryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLibraryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(indexSetting, indexSetting_);
      DARABONBA_PTR_TO_JSON(libraryName, libraryName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLibraryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(indexSetting, indexSetting_);
      DARABONBA_PTR_FROM_JSON(libraryName, libraryName_);
    };
    CreateLibraryRequest() = default ;
    CreateLibraryRequest(const CreateLibraryRequest &) = default ;
    CreateLibraryRequest(CreateLibraryRequest &&) = default ;
    CreateLibraryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLibraryRequest() = default ;
    CreateLibraryRequest& operator=(const CreateLibraryRequest &) = default ;
    CreateLibraryRequest& operator=(CreateLibraryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->indexSetting_ != nullptr && this->libraryName_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLibraryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // indexSetting Field Functions 
    bool hasIndexSetting() const { return this->indexSetting_ != nullptr;};
    void deleteIndexSetting() { this->indexSetting_ = nullptr;};
    inline const CreateLibraryRequestIndexSetting & indexSetting() const { DARABONBA_PTR_GET_CONST(indexSetting_, CreateLibraryRequestIndexSetting) };
    inline CreateLibraryRequestIndexSetting indexSetting() { DARABONBA_PTR_GET(indexSetting_, CreateLibraryRequestIndexSetting) };
    inline CreateLibraryRequest& setIndexSetting(const CreateLibraryRequestIndexSetting & indexSetting) { DARABONBA_PTR_SET_VALUE(indexSetting_, indexSetting) };
    inline CreateLibraryRequest& setIndexSetting(CreateLibraryRequestIndexSetting && indexSetting) { DARABONBA_PTR_SET_RVALUE(indexSetting_, indexSetting) };


    // libraryName Field Functions 
    bool hasLibraryName() const { return this->libraryName_ != nullptr;};
    void deleteLibraryName() { this->libraryName_ = nullptr;};
    inline string libraryName() const { DARABONBA_PTR_GET_DEFAULT(libraryName_, "") };
    inline CreateLibraryRequest& setLibraryName(string libraryName) { DARABONBA_PTR_SET_VALUE(libraryName_, libraryName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<CreateLibraryRequestIndexSetting> indexSetting_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> libraryName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
