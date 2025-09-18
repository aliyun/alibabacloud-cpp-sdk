// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREVIEWONLINEFEATURESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREVIEWONLINEFEATURESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListFeatureViewOnlineFeaturesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureViewOnlineFeaturesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JoinIds, joinIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureViewOnlineFeaturesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JoinIds, joinIds_);
    };
    ListFeatureViewOnlineFeaturesRequest() = default ;
    ListFeatureViewOnlineFeaturesRequest(const ListFeatureViewOnlineFeaturesRequest &) = default ;
    ListFeatureViewOnlineFeaturesRequest(ListFeatureViewOnlineFeaturesRequest &&) = default ;
    ListFeatureViewOnlineFeaturesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureViewOnlineFeaturesRequest() = default ;
    ListFeatureViewOnlineFeaturesRequest& operator=(const ListFeatureViewOnlineFeaturesRequest &) = default ;
    ListFeatureViewOnlineFeaturesRequest& operator=(ListFeatureViewOnlineFeaturesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->joinIds_ != nullptr; };
    // joinIds Field Functions 
    bool hasJoinIds() const { return this->joinIds_ != nullptr;};
    void deleteJoinIds() { this->joinIds_ = nullptr;};
    inline const vector<string> & joinIds() const { DARABONBA_PTR_GET_CONST(joinIds_, vector<string>) };
    inline vector<string> joinIds() { DARABONBA_PTR_GET(joinIds_, vector<string>) };
    inline ListFeatureViewOnlineFeaturesRequest& setJoinIds(const vector<string> & joinIds) { DARABONBA_PTR_SET_VALUE(joinIds_, joinIds) };
    inline ListFeatureViewOnlineFeaturesRequest& setJoinIds(vector<string> && joinIds) { DARABONBA_PTR_SET_RVALUE(joinIds_, joinIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> joinIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
