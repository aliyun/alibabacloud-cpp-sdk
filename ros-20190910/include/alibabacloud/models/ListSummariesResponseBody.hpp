// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUMMARIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUMMARIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSummariesResponseBodyCenterSummary.hpp>
#include <vector>
#include <alibabacloud/models/ListSummariesResponseBodyRegionSummaries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListSummariesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSummariesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenterSummary, centerSummary_);
      DARABONBA_PTR_TO_JSON(RegionSummaries, regionSummaries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSummariesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenterSummary, centerSummary_);
      DARABONBA_PTR_FROM_JSON(RegionSummaries, regionSummaries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSummariesResponseBody() = default ;
    ListSummariesResponseBody(const ListSummariesResponseBody &) = default ;
    ListSummariesResponseBody(ListSummariesResponseBody &&) = default ;
    ListSummariesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSummariesResponseBody() = default ;
    ListSummariesResponseBody& operator=(const ListSummariesResponseBody &) = default ;
    ListSummariesResponseBody& operator=(ListSummariesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->centerSummary_ == nullptr
        && return this->regionSummaries_ == nullptr && return this->requestId_ == nullptr; };
    // centerSummary Field Functions 
    bool hasCenterSummary() const { return this->centerSummary_ != nullptr;};
    void deleteCenterSummary() { this->centerSummary_ = nullptr;};
    inline const ListSummariesResponseBodyCenterSummary & centerSummary() const { DARABONBA_PTR_GET_CONST(centerSummary_, ListSummariesResponseBodyCenterSummary) };
    inline ListSummariesResponseBodyCenterSummary centerSummary() { DARABONBA_PTR_GET(centerSummary_, ListSummariesResponseBodyCenterSummary) };
    inline ListSummariesResponseBody& setCenterSummary(const ListSummariesResponseBodyCenterSummary & centerSummary) { DARABONBA_PTR_SET_VALUE(centerSummary_, centerSummary) };
    inline ListSummariesResponseBody& setCenterSummary(ListSummariesResponseBodyCenterSummary && centerSummary) { DARABONBA_PTR_SET_RVALUE(centerSummary_, centerSummary) };


    // regionSummaries Field Functions 
    bool hasRegionSummaries() const { return this->regionSummaries_ != nullptr;};
    void deleteRegionSummaries() { this->regionSummaries_ = nullptr;};
    inline const vector<ListSummariesResponseBodyRegionSummaries> & regionSummaries() const { DARABONBA_PTR_GET_CONST(regionSummaries_, vector<ListSummariesResponseBodyRegionSummaries>) };
    inline vector<ListSummariesResponseBodyRegionSummaries> regionSummaries() { DARABONBA_PTR_GET(regionSummaries_, vector<ListSummariesResponseBodyRegionSummaries>) };
    inline ListSummariesResponseBody& setRegionSummaries(const vector<ListSummariesResponseBodyRegionSummaries> & regionSummaries) { DARABONBA_PTR_SET_VALUE(regionSummaries_, regionSummaries) };
    inline ListSummariesResponseBody& setRegionSummaries(vector<ListSummariesResponseBodyRegionSummaries> && regionSummaries) { DARABONBA_PTR_SET_RVALUE(regionSummaries_, regionSummaries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSummariesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListSummariesResponseBodyCenterSummary> centerSummary_ = nullptr;
    std::shared_ptr<vector<ListSummariesResponseBodyRegionSummaries>> regionSummaries_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
