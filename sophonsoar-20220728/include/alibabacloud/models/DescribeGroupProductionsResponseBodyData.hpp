// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPPRODUCTIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPPRODUCTIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupProductionsResponseBodyDataProductions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeGroupProductionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupProductionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Productions, productions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupProductionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Productions, productions_);
    };
    DescribeGroupProductionsResponseBodyData() = default ;
    DescribeGroupProductionsResponseBodyData(const DescribeGroupProductionsResponseBodyData &) = default ;
    DescribeGroupProductionsResponseBodyData(DescribeGroupProductionsResponseBodyData &&) = default ;
    DescribeGroupProductionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupProductionsResponseBodyData() = default ;
    DescribeGroupProductionsResponseBodyData& operator=(const DescribeGroupProductionsResponseBodyData &) = default ;
    DescribeGroupProductionsResponseBodyData& operator=(DescribeGroupProductionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && return this->productions_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeGroupProductionsResponseBodyData& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // productions Field Functions 
    bool hasProductions() const { return this->productions_ != nullptr;};
    void deleteProductions() { this->productions_ = nullptr;};
    inline const vector<Models::DescribeGroupProductionsResponseBodyDataProductions> & productions() const { DARABONBA_PTR_GET_CONST(productions_, vector<Models::DescribeGroupProductionsResponseBodyDataProductions>) };
    inline vector<Models::DescribeGroupProductionsResponseBodyDataProductions> productions() { DARABONBA_PTR_GET(productions_, vector<Models::DescribeGroupProductionsResponseBodyDataProductions>) };
    inline DescribeGroupProductionsResponseBodyData& setProductions(const vector<Models::DescribeGroupProductionsResponseBodyDataProductions> & productions) { DARABONBA_PTR_SET_VALUE(productions_, productions) };
    inline DescribeGroupProductionsResponseBodyData& setProductions(vector<Models::DescribeGroupProductionsResponseBodyDataProductions> && productions) { DARABONBA_PTR_SET_RVALUE(productions_, productions) };


  protected:
    // The name of the cloud service.
    std::shared_ptr<string> groupName_ = nullptr;
    // The information about the cloud services.
    std::shared_ptr<vector<Models::DescribeGroupProductionsResponseBodyDataProductions>> productions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
