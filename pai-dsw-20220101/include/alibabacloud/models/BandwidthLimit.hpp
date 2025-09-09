// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BANDWIDTHLIMIT_HPP_
#define ALIBABACLOUD_MODELS_BANDWIDTHLIMIT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class BandwidthLimit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BandwidthLimit& obj) { 
      DARABONBA_PTR_TO_JSON(EgressRate, egressRate_);
      DARABONBA_PTR_TO_JSON(EgressWhitelists, egressWhitelists_);
      DARABONBA_PTR_TO_JSON(IngressRate, ingressRate_);
      DARABONBA_PTR_TO_JSON(IngressWhitelists, ingressWhitelists_);
    };
    friend void from_json(const Darabonba::Json& j, BandwidthLimit& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressRate, egressRate_);
      DARABONBA_PTR_FROM_JSON(EgressWhitelists, egressWhitelists_);
      DARABONBA_PTR_FROM_JSON(IngressRate, ingressRate_);
      DARABONBA_PTR_FROM_JSON(IngressWhitelists, ingressWhitelists_);
    };
    BandwidthLimit() = default ;
    BandwidthLimit(const BandwidthLimit &) = default ;
    BandwidthLimit(BandwidthLimit &&) = default ;
    BandwidthLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BandwidthLimit() = default ;
    BandwidthLimit& operator=(const BandwidthLimit &) = default ;
    BandwidthLimit& operator=(BandwidthLimit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->egressRate_ != nullptr
        && this->egressWhitelists_ != nullptr && this->ingressRate_ != nullptr && this->ingressWhitelists_ != nullptr; };
    // egressRate Field Functions 
    bool hasEgressRate() const { return this->egressRate_ != nullptr;};
    void deleteEgressRate() { this->egressRate_ = nullptr;};
    inline string egressRate() const { DARABONBA_PTR_GET_DEFAULT(egressRate_, "") };
    inline BandwidthLimit& setEgressRate(string egressRate) { DARABONBA_PTR_SET_VALUE(egressRate_, egressRate) };


    // egressWhitelists Field Functions 
    bool hasEgressWhitelists() const { return this->egressWhitelists_ != nullptr;};
    void deleteEgressWhitelists() { this->egressWhitelists_ = nullptr;};
    inline const vector<string> & egressWhitelists() const { DARABONBA_PTR_GET_CONST(egressWhitelists_, vector<string>) };
    inline vector<string> egressWhitelists() { DARABONBA_PTR_GET(egressWhitelists_, vector<string>) };
    inline BandwidthLimit& setEgressWhitelists(const vector<string> & egressWhitelists) { DARABONBA_PTR_SET_VALUE(egressWhitelists_, egressWhitelists) };
    inline BandwidthLimit& setEgressWhitelists(vector<string> && egressWhitelists) { DARABONBA_PTR_SET_RVALUE(egressWhitelists_, egressWhitelists) };


    // ingressRate Field Functions 
    bool hasIngressRate() const { return this->ingressRate_ != nullptr;};
    void deleteIngressRate() { this->ingressRate_ = nullptr;};
    inline string ingressRate() const { DARABONBA_PTR_GET_DEFAULT(ingressRate_, "") };
    inline BandwidthLimit& setIngressRate(string ingressRate) { DARABONBA_PTR_SET_VALUE(ingressRate_, ingressRate) };


    // ingressWhitelists Field Functions 
    bool hasIngressWhitelists() const { return this->ingressWhitelists_ != nullptr;};
    void deleteIngressWhitelists() { this->ingressWhitelists_ = nullptr;};
    inline const vector<string> & ingressWhitelists() const { DARABONBA_PTR_GET_CONST(ingressWhitelists_, vector<string>) };
    inline vector<string> ingressWhitelists() { DARABONBA_PTR_GET(ingressWhitelists_, vector<string>) };
    inline BandwidthLimit& setIngressWhitelists(const vector<string> & ingressWhitelists) { DARABONBA_PTR_SET_VALUE(ingressWhitelists_, ingressWhitelists) };
    inline BandwidthLimit& setIngressWhitelists(vector<string> && ingressWhitelists) { DARABONBA_PTR_SET_RVALUE(ingressWhitelists_, ingressWhitelists) };


  protected:
    std::shared_ptr<string> egressRate_ = nullptr;
    std::shared_ptr<vector<string>> egressWhitelists_ = nullptr;
    std::shared_ptr<string> ingressRate_ = nullptr;
    std::shared_ptr<vector<string>> ingressWhitelists_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
