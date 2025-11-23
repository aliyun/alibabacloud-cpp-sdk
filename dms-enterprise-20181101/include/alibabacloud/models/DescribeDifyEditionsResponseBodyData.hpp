// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIFYEDITIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIFYEDITIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DescribeDifyEditionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDifyEditionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Community, community_);
      DARABONBA_PTR_TO_JSON(Enterprise, enterprise_);
      DARABONBA_PTR_TO_JSON(OpenCommunity, openCommunity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDifyEditionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Community, community_);
      DARABONBA_PTR_FROM_JSON(Enterprise, enterprise_);
      DARABONBA_PTR_FROM_JSON(OpenCommunity, openCommunity_);
    };
    DescribeDifyEditionsResponseBodyData() = default ;
    DescribeDifyEditionsResponseBodyData(const DescribeDifyEditionsResponseBodyData &) = default ;
    DescribeDifyEditionsResponseBodyData(DescribeDifyEditionsResponseBodyData &&) = default ;
    DescribeDifyEditionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDifyEditionsResponseBodyData() = default ;
    DescribeDifyEditionsResponseBodyData& operator=(const DescribeDifyEditionsResponseBodyData &) = default ;
    DescribeDifyEditionsResponseBodyData& operator=(DescribeDifyEditionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->community_ == nullptr
        && return this->enterprise_ == nullptr && return this->openCommunity_ == nullptr; };
    // community Field Functions 
    bool hasCommunity() const { return this->community_ != nullptr;};
    void deleteCommunity() { this->community_ = nullptr;};
    inline const vector<string> & community() const { DARABONBA_PTR_GET_CONST(community_, vector<string>) };
    inline vector<string> community() { DARABONBA_PTR_GET(community_, vector<string>) };
    inline DescribeDifyEditionsResponseBodyData& setCommunity(const vector<string> & community) { DARABONBA_PTR_SET_VALUE(community_, community) };
    inline DescribeDifyEditionsResponseBodyData& setCommunity(vector<string> && community) { DARABONBA_PTR_SET_RVALUE(community_, community) };


    // enterprise Field Functions 
    bool hasEnterprise() const { return this->enterprise_ != nullptr;};
    void deleteEnterprise() { this->enterprise_ = nullptr;};
    inline const vector<string> & enterprise() const { DARABONBA_PTR_GET_CONST(enterprise_, vector<string>) };
    inline vector<string> enterprise() { DARABONBA_PTR_GET(enterprise_, vector<string>) };
    inline DescribeDifyEditionsResponseBodyData& setEnterprise(const vector<string> & enterprise) { DARABONBA_PTR_SET_VALUE(enterprise_, enterprise) };
    inline DescribeDifyEditionsResponseBodyData& setEnterprise(vector<string> && enterprise) { DARABONBA_PTR_SET_RVALUE(enterprise_, enterprise) };


    // openCommunity Field Functions 
    bool hasOpenCommunity() const { return this->openCommunity_ != nullptr;};
    void deleteOpenCommunity() { this->openCommunity_ = nullptr;};
    inline const vector<string> & openCommunity() const { DARABONBA_PTR_GET_CONST(openCommunity_, vector<string>) };
    inline vector<string> openCommunity() { DARABONBA_PTR_GET(openCommunity_, vector<string>) };
    inline DescribeDifyEditionsResponseBodyData& setOpenCommunity(const vector<string> & openCommunity) { DARABONBA_PTR_SET_VALUE(openCommunity_, openCommunity) };
    inline DescribeDifyEditionsResponseBodyData& setOpenCommunity(vector<string> && openCommunity) { DARABONBA_PTR_SET_RVALUE(openCommunity_, openCommunity) };


  protected:
    std::shared_ptr<vector<string>> community_ = nullptr;
    std::shared_ptr<vector<string>> enterprise_ = nullptr;
    std::shared_ptr<vector<string>> openCommunity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
