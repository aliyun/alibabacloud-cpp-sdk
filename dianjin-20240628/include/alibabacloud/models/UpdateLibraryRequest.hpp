// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIBRARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIBRARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLibraryRequestIndexSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class UpdateLibraryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLibraryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(indexSetting, indexSetting_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(libraryName, libraryName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLibraryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(indexSetting, indexSetting_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(libraryName, libraryName_);
    };
    UpdateLibraryRequest() = default ;
    UpdateLibraryRequest(const UpdateLibraryRequest &) = default ;
    UpdateLibraryRequest(UpdateLibraryRequest &&) = default ;
    UpdateLibraryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLibraryRequest() = default ;
    UpdateLibraryRequest& operator=(const UpdateLibraryRequest &) = default ;
    UpdateLibraryRequest& operator=(UpdateLibraryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->indexSetting_ == nullptr && return this->libraryId_ == nullptr && return this->libraryName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateLibraryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // indexSetting Field Functions 
    bool hasIndexSetting() const { return this->indexSetting_ != nullptr;};
    void deleteIndexSetting() { this->indexSetting_ = nullptr;};
    inline const UpdateLibraryRequestIndexSetting & indexSetting() const { DARABONBA_PTR_GET_CONST(indexSetting_, UpdateLibraryRequestIndexSetting) };
    inline UpdateLibraryRequestIndexSetting indexSetting() { DARABONBA_PTR_GET(indexSetting_, UpdateLibraryRequestIndexSetting) };
    inline UpdateLibraryRequest& setIndexSetting(const UpdateLibraryRequestIndexSetting & indexSetting) { DARABONBA_PTR_SET_VALUE(indexSetting_, indexSetting) };
    inline UpdateLibraryRequest& setIndexSetting(UpdateLibraryRequestIndexSetting && indexSetting) { DARABONBA_PTR_SET_RVALUE(indexSetting_, indexSetting) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline UpdateLibraryRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // libraryName Field Functions 
    bool hasLibraryName() const { return this->libraryName_ != nullptr;};
    void deleteLibraryName() { this->libraryName_ = nullptr;};
    inline string libraryName() const { DARABONBA_PTR_GET_DEFAULT(libraryName_, "") };
    inline UpdateLibraryRequest& setLibraryName(string libraryName) { DARABONBA_PTR_SET_VALUE(libraryName_, libraryName) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<UpdateLibraryRequestIndexSetting> indexSetting_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> libraryId_ = nullptr;
    std::shared_ptr<string> libraryName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
