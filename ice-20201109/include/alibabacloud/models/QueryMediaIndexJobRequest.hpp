// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAINDEXJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAINDEXJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryMediaIndexJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaIndexJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaIndexJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
    };
    QueryMediaIndexJobRequest() = default ;
    QueryMediaIndexJobRequest(const QueryMediaIndexJobRequest &) = default ;
    QueryMediaIndexJobRequest(QueryMediaIndexJobRequest &&) = default ;
    QueryMediaIndexJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaIndexJobRequest() = default ;
    QueryMediaIndexJobRequest& operator=(const QueryMediaIndexJobRequest &) = default ;
    QueryMediaIndexJobRequest& operator=(QueryMediaIndexJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaId_ == nullptr
        && return this->searchLibName_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline QueryMediaIndexJobRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline QueryMediaIndexJobRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


  protected:
    // The ID of the media asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The name of the search library. Default value: ims-default-search-lib.
    std::shared_ptr<string> searchLibName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
