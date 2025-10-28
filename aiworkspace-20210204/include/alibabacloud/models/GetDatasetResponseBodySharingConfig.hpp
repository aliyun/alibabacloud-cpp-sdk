// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODYSHARINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODYSHARINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DatasetShareRelationship.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetDatasetResponseBodySharingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetResponseBodySharingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SharedTo, sharedTo_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetResponseBodySharingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SharedTo, sharedTo_);
    };
    GetDatasetResponseBodySharingConfig() = default ;
    GetDatasetResponseBodySharingConfig(const GetDatasetResponseBodySharingConfig &) = default ;
    GetDatasetResponseBodySharingConfig(GetDatasetResponseBodySharingConfig &&) = default ;
    GetDatasetResponseBodySharingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetResponseBodySharingConfig() = default ;
    GetDatasetResponseBodySharingConfig& operator=(const GetDatasetResponseBodySharingConfig &) = default ;
    GetDatasetResponseBodySharingConfig& operator=(GetDatasetResponseBodySharingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sharedTo_ == nullptr; };
    // sharedTo Field Functions 
    bool hasSharedTo() const { return this->sharedTo_ != nullptr;};
    void deleteSharedTo() { this->sharedTo_ = nullptr;};
    inline const vector<Models::DatasetShareRelationship> & sharedTo() const { DARABONBA_PTR_GET_CONST(sharedTo_, vector<Models::DatasetShareRelationship>) };
    inline vector<Models::DatasetShareRelationship> sharedTo() { DARABONBA_PTR_GET(sharedTo_, vector<Models::DatasetShareRelationship>) };
    inline GetDatasetResponseBodySharingConfig& setSharedTo(const vector<Models::DatasetShareRelationship> & sharedTo) { DARABONBA_PTR_SET_VALUE(sharedTo_, sharedTo) };
    inline GetDatasetResponseBodySharingConfig& setSharedTo(vector<Models::DatasetShareRelationship> && sharedTo) { DARABONBA_PTR_SET_RVALUE(sharedTo_, sharedTo) };


  protected:
    std::shared_ptr<vector<Models::DatasetShareRelationship>> sharedTo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
