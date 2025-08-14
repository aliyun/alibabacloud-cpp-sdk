// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMIZEDVOICEJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMIZEDVOICEJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListCustomizedVoiceJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomizedVoiceJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomizedVoiceJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListCustomizedVoiceJobsRequest() = default ;
    ListCustomizedVoiceJobsRequest(const ListCustomizedVoiceJobsRequest &) = default ;
    ListCustomizedVoiceJobsRequest(ListCustomizedVoiceJobsRequest &&) = default ;
    ListCustomizedVoiceJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomizedVoiceJobsRequest() = default ;
    ListCustomizedVoiceJobsRequest& operator=(const ListCustomizedVoiceJobsRequest &) = default ;
    ListCustomizedVoiceJobsRequest& operator=(ListCustomizedVoiceJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNo_ != nullptr
        && this->pageSize_ != nullptr && this->type_ != nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListCustomizedVoiceJobsRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomizedVoiceJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCustomizedVoiceJobsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10. Valid values: 1 to 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The type of the human voice cloning job. Valid values:
    // 
    // *   Basic
    // *   Standard
    // 
    // > : If you do not specify this parameter, the default value Basic is used.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
