// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPSLSLOGINFO_HPP_
#define ALIBABACLOUD_MODELS_PDPSLSLOGINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpSlsLogInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpSlsLogInfo& obj) { 
      DARABONBA_PTR_TO_JSON(slsUrl, slsUrl_);
    };
    friend void from_json(const Darabonba::Json& j, PdpSlsLogInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(slsUrl, slsUrl_);
    };
    PdpSlsLogInfo() = default ;
    PdpSlsLogInfo(const PdpSlsLogInfo &) = default ;
    PdpSlsLogInfo(PdpSlsLogInfo &&) = default ;
    PdpSlsLogInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpSlsLogInfo() = default ;
    PdpSlsLogInfo& operator=(const PdpSlsLogInfo &) = default ;
    PdpSlsLogInfo& operator=(PdpSlsLogInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slsUrl_ == nullptr; };
    // slsUrl Field Functions 
    bool hasSlsUrl() const { return this->slsUrl_ != nullptr;};
    void deleteSlsUrl() { this->slsUrl_ = nullptr;};
    inline string getSlsUrl() const { DARABONBA_PTR_GET_DEFAULT(slsUrl_, "") };
    inline PdpSlsLogInfo& setSlsUrl(string slsUrl) { DARABONBA_PTR_SET_VALUE(slsUrl_, slsUrl) };


  protected:
    shared_ptr<string> slsUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
