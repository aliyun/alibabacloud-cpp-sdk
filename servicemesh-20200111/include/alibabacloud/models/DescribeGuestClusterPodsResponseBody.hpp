// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGUESTCLUSTERPODSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGUESTCLUSTERPODSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeGuestClusterPodsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGuestClusterPodsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PodList, podList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGuestClusterPodsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PodList, podList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGuestClusterPodsResponseBody() = default ;
    DescribeGuestClusterPodsResponseBody(const DescribeGuestClusterPodsResponseBody &) = default ;
    DescribeGuestClusterPodsResponseBody(DescribeGuestClusterPodsResponseBody &&) = default ;
    DescribeGuestClusterPodsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGuestClusterPodsResponseBody() = default ;
    DescribeGuestClusterPodsResponseBody& operator=(const DescribeGuestClusterPodsResponseBody &) = default ;
    DescribeGuestClusterPodsResponseBody& operator=(DescribeGuestClusterPodsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->podList_ == nullptr
        && return this->requestId_ == nullptr; };
    // podList Field Functions 
    bool hasPodList() const { return this->podList_ != nullptr;};
    void deletePodList() { this->podList_ = nullptr;};
    inline const vector<string> & podList() const { DARABONBA_PTR_GET_CONST(podList_, vector<string>) };
    inline vector<string> podList() { DARABONBA_PTR_GET(podList_, vector<string>) };
    inline DescribeGuestClusterPodsResponseBody& setPodList(const vector<string> & podList) { DARABONBA_PTR_SET_VALUE(podList_, podList) };
    inline DescribeGuestClusterPodsResponseBody& setPodList(vector<string> && podList) { DARABONBA_PTR_SET_RVALUE(podList_, podList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGuestClusterPodsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of the names of the queried pods.
    std::shared_ptr<vector<string>> podList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
