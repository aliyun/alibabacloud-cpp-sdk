// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELSERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListModelServicesResponseBodyModelServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListModelServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModelServices, modelServices_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelServices, modelServices_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListModelServicesResponseBody() = default ;
    ListModelServicesResponseBody(const ListModelServicesResponseBody &) = default ;
    ListModelServicesResponseBody(ListModelServicesResponseBody &&) = default ;
    ListModelServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelServicesResponseBody() = default ;
    ListModelServicesResponseBody& operator=(const ListModelServicesResponseBody &) = default ;
    ListModelServicesResponseBody& operator=(ListModelServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelServices_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageRecordCount_ == nullptr && return this->requestId_ == nullptr && return this->totalRecordCount_ == nullptr; };
    // modelServices Field Functions 
    bool hasModelServices() const { return this->modelServices_ != nullptr;};
    void deleteModelServices() { this->modelServices_ = nullptr;};
    inline const vector<ListModelServicesResponseBodyModelServices> & modelServices() const { DARABONBA_PTR_GET_CONST(modelServices_, vector<ListModelServicesResponseBodyModelServices>) };
    inline vector<ListModelServicesResponseBodyModelServices> modelServices() { DARABONBA_PTR_GET(modelServices_, vector<ListModelServicesResponseBodyModelServices>) };
    inline ListModelServicesResponseBody& setModelServices(const vector<ListModelServicesResponseBodyModelServices> & modelServices) { DARABONBA_PTR_SET_VALUE(modelServices_, modelServices) };
    inline ListModelServicesResponseBody& setModelServices(vector<ListModelServicesResponseBodyModelServices> && modelServices) { DARABONBA_PTR_SET_RVALUE(modelServices_, modelServices) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListModelServicesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t pageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline ListModelServicesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListModelServicesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    std::shared_ptr<vector<ListModelServicesResponseBodyModelServices>> modelServices_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageRecordCount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
