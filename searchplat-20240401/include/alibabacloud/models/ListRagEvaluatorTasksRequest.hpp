// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRAGEVALUATORTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRAGEVALUATORTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class ListRagEvaluatorTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRagEvaluatorTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListRagEvaluatorTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListRagEvaluatorTasksRequest() = default ;
    ListRagEvaluatorTasksRequest(const ListRagEvaluatorTasksRequest &) = default ;
    ListRagEvaluatorTasksRequest(ListRagEvaluatorTasksRequest &&) = default ;
    ListRagEvaluatorTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRagEvaluatorTasksRequest() = default ;
    ListRagEvaluatorTasksRequest& operator=(const ListRagEvaluatorTasksRequest &) = default ;
    ListRagEvaluatorTasksRequest& operator=(ListRagEvaluatorTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListRagEvaluatorTasksRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListRagEvaluatorTasksRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The page number. Default value: 1.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
