// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDIJobsResponseBodyDIJobPaging.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDIJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobPaging, DIJobPaging_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobPaging, DIJobPaging_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDIJobsResponseBody() = default ;
    ListDIJobsResponseBody(const ListDIJobsResponseBody &) = default ;
    ListDIJobsResponseBody(ListDIJobsResponseBody &&) = default ;
    ListDIJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobsResponseBody() = default ;
    ListDIJobsResponseBody& operator=(const ListDIJobsResponseBody &) = default ;
    ListDIJobsResponseBody& operator=(ListDIJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIJobPaging_ != nullptr
        && this->requestId_ != nullptr; };
    // DIJobPaging Field Functions 
    bool hasDIJobPaging() const { return this->DIJobPaging_ != nullptr;};
    void deleteDIJobPaging() { this->DIJobPaging_ = nullptr;};
    inline const ListDIJobsResponseBodyDIJobPaging & DIJobPaging() const { DARABONBA_PTR_GET_CONST(DIJobPaging_, ListDIJobsResponseBodyDIJobPaging) };
    inline ListDIJobsResponseBodyDIJobPaging DIJobPaging() { DARABONBA_PTR_GET(DIJobPaging_, ListDIJobsResponseBodyDIJobPaging) };
    inline ListDIJobsResponseBody& setDIJobPaging(const ListDIJobsResponseBodyDIJobPaging & DIJobPaging) { DARABONBA_PTR_SET_VALUE(DIJobPaging_, DIJobPaging) };
    inline ListDIJobsResponseBody& setDIJobPaging(ListDIJobsResponseBodyDIJobPaging && DIJobPaging) { DARABONBA_PTR_SET_RVALUE(DIJobPaging_, DIJobPaging) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDIJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<ListDIJobsResponseBodyDIJobPaging> DIJobPaging_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
