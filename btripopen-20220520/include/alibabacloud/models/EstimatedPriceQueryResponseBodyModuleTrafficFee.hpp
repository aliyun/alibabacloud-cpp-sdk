// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYRESPONSEBODYMODULETRAFFICFEE_HPP_
#define ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYRESPONSEBODYMODULETRAFFICFEE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EstimatedPriceQueryResponseBodyModuleTrafficFee : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EstimatedPriceQueryResponseBodyModuleTrafficFee& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_routes, btripRoutes_);
      DARABONBA_PTR_TO_JSON(err_msg, errMsg_);
      DARABONBA_PTR_TO_JSON(max_fee, maxFee_);
      DARABONBA_PTR_TO_JSON(min_fee, minFee_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EstimatedPriceQueryResponseBodyModuleTrafficFee& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_routes, btripRoutes_);
      DARABONBA_PTR_FROM_JSON(err_msg, errMsg_);
      DARABONBA_PTR_FROM_JSON(max_fee, maxFee_);
      DARABONBA_PTR_FROM_JSON(min_fee, minFee_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    EstimatedPriceQueryResponseBodyModuleTrafficFee() = default ;
    EstimatedPriceQueryResponseBodyModuleTrafficFee(const EstimatedPriceQueryResponseBodyModuleTrafficFee &) = default ;
    EstimatedPriceQueryResponseBodyModuleTrafficFee(EstimatedPriceQueryResponseBodyModuleTrafficFee &&) = default ;
    EstimatedPriceQueryResponseBodyModuleTrafficFee(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EstimatedPriceQueryResponseBodyModuleTrafficFee() = default ;
    EstimatedPriceQueryResponseBodyModuleTrafficFee& operator=(const EstimatedPriceQueryResponseBodyModuleTrafficFee &) = default ;
    EstimatedPriceQueryResponseBodyModuleTrafficFee& operator=(EstimatedPriceQueryResponseBodyModuleTrafficFee &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripRoutes_ != nullptr
        && this->errMsg_ != nullptr && this->maxFee_ != nullptr && this->minFee_ != nullptr && this->success_ != nullptr; };
    // btripRoutes Field Functions 
    bool hasBtripRoutes() const { return this->btripRoutes_ != nullptr;};
    void deleteBtripRoutes() { this->btripRoutes_ = nullptr;};
    inline const vector<Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes> & btripRoutes() const { DARABONBA_PTR_GET_CONST(btripRoutes_, vector<Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes>) };
    inline vector<Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes> btripRoutes() { DARABONBA_PTR_GET(btripRoutes_, vector<Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes>) };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFee& setBtripRoutes(const vector<Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes> & btripRoutes) { DARABONBA_PTR_SET_VALUE(btripRoutes_, btripRoutes) };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFee& setBtripRoutes(vector<Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes> && btripRoutes) { DARABONBA_PTR_SET_RVALUE(btripRoutes_, btripRoutes) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFee& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // maxFee Field Functions 
    bool hasMaxFee() const { return this->maxFee_ != nullptr;};
    void deleteMaxFee() { this->maxFee_ = nullptr;};
    inline int64_t maxFee() const { DARABONBA_PTR_GET_DEFAULT(maxFee_, 0L) };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFee& setMaxFee(int64_t maxFee) { DARABONBA_PTR_SET_VALUE(maxFee_, maxFee) };


    // minFee Field Functions 
    bool hasMinFee() const { return this->minFee_ != nullptr;};
    void deleteMinFee() { this->minFee_ = nullptr;};
    inline int64_t minFee() const { DARABONBA_PTR_GET_DEFAULT(minFee_, 0L) };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFee& setMinFee(int64_t minFee) { DARABONBA_PTR_SET_VALUE(minFee_, minFee) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFee& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes>> btripRoutes_ = nullptr;
    std::shared_ptr<string> errMsg_ = nullptr;
    std::shared_ptr<int64_t> maxFee_ = nullptr;
    std::shared_ptr<int64_t> minFee_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
