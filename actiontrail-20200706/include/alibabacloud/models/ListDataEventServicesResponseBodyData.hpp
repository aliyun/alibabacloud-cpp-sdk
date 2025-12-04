// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAEVENTSERVICESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAEVENTSERVICESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataEventServicesResponseBodyDataServiceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class ListDataEventServicesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataEventServicesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ServiceInfos, serviceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataEventServicesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ServiceInfos, serviceInfos_);
    };
    ListDataEventServicesResponseBodyData() = default ;
    ListDataEventServicesResponseBodyData(const ListDataEventServicesResponseBodyData &) = default ;
    ListDataEventServicesResponseBodyData(ListDataEventServicesResponseBodyData &&) = default ;
    ListDataEventServicesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataEventServicesResponseBodyData() = default ;
    ListDataEventServicesResponseBodyData& operator=(const ListDataEventServicesResponseBodyData &) = default ;
    ListDataEventServicesResponseBodyData& operator=(ListDataEventServicesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->serviceInfos_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataEventServicesResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataEventServicesResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // serviceInfos Field Functions 
    bool hasServiceInfos() const { return this->serviceInfos_ != nullptr;};
    void deleteServiceInfos() { this->serviceInfos_ = nullptr;};
    inline const vector<Models::ListDataEventServicesResponseBodyDataServiceInfos> & serviceInfos() const { DARABONBA_PTR_GET_CONST(serviceInfos_, vector<Models::ListDataEventServicesResponseBodyDataServiceInfos>) };
    inline vector<Models::ListDataEventServicesResponseBodyDataServiceInfos> serviceInfos() { DARABONBA_PTR_GET(serviceInfos_, vector<Models::ListDataEventServicesResponseBodyDataServiceInfos>) };
    inline ListDataEventServicesResponseBodyData& setServiceInfos(const vector<Models::ListDataEventServicesResponseBodyDataServiceInfos> & serviceInfos) { DARABONBA_PTR_SET_VALUE(serviceInfos_, serviceInfos) };
    inline ListDataEventServicesResponseBodyData& setServiceInfos(vector<Models::ListDataEventServicesResponseBodyDataServiceInfos> && serviceInfos) { DARABONBA_PTR_SET_RVALUE(serviceInfos_, serviceInfos) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<Models::ListDataEventServicesResponseBodyDataServiceInfos>> serviceInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
