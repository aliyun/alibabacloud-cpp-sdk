// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEKEYWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEKEYWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class DeleteKeywordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteKeywordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeywordIdList, keywordIdList_);
      DARABONBA_PTR_TO_JSON(KeywordIds, keywordIds_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteKeywordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeywordIdList, keywordIdList_);
      DARABONBA_PTR_FROM_JSON(KeywordIds, keywordIds_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteKeywordRequest() = default ;
    DeleteKeywordRequest(const DeleteKeywordRequest &) = default ;
    DeleteKeywordRequest(DeleteKeywordRequest &&) = default ;
    DeleteKeywordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteKeywordRequest() = default ;
    DeleteKeywordRequest& operator=(const DeleteKeywordRequest &) = default ;
    DeleteKeywordRequest& operator=(DeleteKeywordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keywordIdList_ == nullptr
        && return this->keywordIds_ == nullptr && return this->libId_ == nullptr && return this->regionId_ == nullptr; };
    // keywordIdList Field Functions 
    bool hasKeywordIdList() const { return this->keywordIdList_ != nullptr;};
    void deleteKeywordIdList() { this->keywordIdList_ = nullptr;};
    inline string keywordIdList() const { DARABONBA_PTR_GET_DEFAULT(keywordIdList_, "") };
    inline DeleteKeywordRequest& setKeywordIdList(string keywordIdList) { DARABONBA_PTR_SET_VALUE(keywordIdList_, keywordIdList) };


    // keywordIds Field Functions 
    bool hasKeywordIds() const { return this->keywordIds_ != nullptr;};
    void deleteKeywordIds() { this->keywordIds_ = nullptr;};
    inline string keywordIds() const { DARABONBA_PTR_GET_DEFAULT(keywordIds_, "") };
    inline DeleteKeywordRequest& setKeywordIds(string keywordIds) { DARABONBA_PTR_SET_VALUE(keywordIds_, keywordIds) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline DeleteKeywordRequest& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteKeywordRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ids\\" list of keywords.
    std::shared_ptr<string> keywordIdList_ = nullptr;
    // The ids of keywords.
    std::shared_ptr<string> keywordIds_ = nullptr;
    // Library id
    std::shared_ptr<string> libId_ = nullptr;
    // Region ID
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
