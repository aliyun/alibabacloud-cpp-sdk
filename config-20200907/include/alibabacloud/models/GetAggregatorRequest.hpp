// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAggregatorRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregatorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregatorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregatorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetAggregatorRequest() = default ;
    GetAggregatorRequest(const GetAggregatorRequest &) = default ;
    GetAggregatorRequest(GetAggregatorRequest &&) = default ;
    GetAggregatorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregatorRequest() = default ;
    GetAggregatorRequest& operator=(const GetAggregatorRequest &) = default ;
    GetAggregatorRequest& operator=(GetAggregatorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->tag_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GetAggregatorRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<GetAggregatorRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<GetAggregatorRequestTag>) };
    inline vector<GetAggregatorRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<GetAggregatorRequestTag>) };
    inline GetAggregatorRequest& setTag(const vector<GetAggregatorRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetAggregatorRequest& setTag(vector<GetAggregatorRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the account group.
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The tags of the resource.
    // 
    // You can add up to 20 tags to a resource.
    std::shared_ptr<vector<GetAggregatorRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
