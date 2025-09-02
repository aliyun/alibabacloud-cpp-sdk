// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOPTENERRORTIMESINSTANCERESPONSEBODYINSTANCEERRORRANK_HPP_
#define ALIBABACLOUD_MODELS_TOPTENERRORTIMESINSTANCERESPONSEBODYINSTANCEERRORRANK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class TopTenErrorTimesInstanceResponseBodyInstanceErrorRank : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TopTenErrorTimesInstanceResponseBodyInstanceErrorRank& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorRank, errorRank_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, TopTenErrorTimesInstanceResponseBodyInstanceErrorRank& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorRank, errorRank_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    TopTenErrorTimesInstanceResponseBodyInstanceErrorRank() = default ;
    TopTenErrorTimesInstanceResponseBodyInstanceErrorRank(const TopTenErrorTimesInstanceResponseBodyInstanceErrorRank &) = default ;
    TopTenErrorTimesInstanceResponseBodyInstanceErrorRank(TopTenErrorTimesInstanceResponseBodyInstanceErrorRank &&) = default ;
    TopTenErrorTimesInstanceResponseBodyInstanceErrorRank(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TopTenErrorTimesInstanceResponseBodyInstanceErrorRank() = default ;
    TopTenErrorTimesInstanceResponseBodyInstanceErrorRank& operator=(const TopTenErrorTimesInstanceResponseBodyInstanceErrorRank &) = default ;
    TopTenErrorTimesInstanceResponseBodyInstanceErrorRank& operator=(TopTenErrorTimesInstanceResponseBodyInstanceErrorRank &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorRank_ != nullptr
        && this->updateTime_ != nullptr; };
    // errorRank Field Functions 
    bool hasErrorRank() const { return this->errorRank_ != nullptr;};
    void deleteErrorRank() { this->errorRank_ = nullptr;};
    inline const vector<Models::TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank> & errorRank() const { DARABONBA_PTR_GET_CONST(errorRank_, vector<Models::TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank>) };
    inline vector<Models::TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank> errorRank() { DARABONBA_PTR_GET(errorRank_, vector<Models::TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank>) };
    inline TopTenErrorTimesInstanceResponseBodyInstanceErrorRank& setErrorRank(const vector<Models::TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank> & errorRank) { DARABONBA_PTR_SET_VALUE(errorRank_, errorRank) };
    inline TopTenErrorTimesInstanceResponseBodyInstanceErrorRank& setErrorRank(vector<Models::TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank> && errorRank) { DARABONBA_PTR_SET_RVALUE(errorRank_, errorRank) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline TopTenErrorTimesInstanceResponseBodyInstanceErrorRank& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ranking data of nodes on which errors occurred within the last month.
    std::shared_ptr<vector<Models::TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank>> errorRank_ = nullptr;
    // The timestamp at which the rankings were updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
