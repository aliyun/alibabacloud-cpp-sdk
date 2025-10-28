// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETSHARINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DATASETSHARINGCONFIG_HPP_
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
  class DatasetSharingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasetSharingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SharedTo, sharedTo_);
    };
    friend void from_json(const Darabonba::Json& j, DatasetSharingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SharedTo, sharedTo_);
    };
    DatasetSharingConfig() = default ;
    DatasetSharingConfig(const DatasetSharingConfig &) = default ;
    DatasetSharingConfig(DatasetSharingConfig &&) = default ;
    DatasetSharingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasetSharingConfig() = default ;
    DatasetSharingConfig& operator=(const DatasetSharingConfig &) = default ;
    DatasetSharingConfig& operator=(DatasetSharingConfig &&) = default ;
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
    inline DatasetSharingConfig& setSharedTo(const vector<Models::DatasetShareRelationship> & sharedTo) { DARABONBA_PTR_SET_VALUE(sharedTo_, sharedTo) };
    inline DatasetSharingConfig& setSharedTo(vector<Models::DatasetShareRelationship> && sharedTo) { DARABONBA_PTR_SET_RVALUE(sharedTo_, sharedTo) };


  protected:
    std::shared_ptr<vector<Models::DatasetShareRelationship>> sharedTo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
