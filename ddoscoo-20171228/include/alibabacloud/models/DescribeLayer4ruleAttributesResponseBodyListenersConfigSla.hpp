// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODYLISTENERSCONFIGSLA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODYLISTENERSCONFIGSLA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeLayer4RuleAttributesResponseBodyListenersConfigSla : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer4RuleAttributesResponseBodyListenersConfigSla& obj) { 
      DARABONBA_PTR_TO_JSON(Cps, cps_);
      DARABONBA_PTR_TO_JSON(CpsEnable, cpsEnable_);
      DARABONBA_PTR_TO_JSON(Maxconn, maxconn_);
      DARABONBA_PTR_TO_JSON(MaxconnEnable, maxconnEnable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer4RuleAttributesResponseBodyListenersConfigSla& obj) { 
      DARABONBA_PTR_FROM_JSON(Cps, cps_);
      DARABONBA_PTR_FROM_JSON(CpsEnable, cpsEnable_);
      DARABONBA_PTR_FROM_JSON(Maxconn, maxconn_);
      DARABONBA_PTR_FROM_JSON(MaxconnEnable, maxconnEnable_);
    };
    DescribeLayer4RuleAttributesResponseBodyListenersConfigSla() = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigSla(const DescribeLayer4RuleAttributesResponseBodyListenersConfigSla &) = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigSla(DescribeLayer4RuleAttributesResponseBodyListenersConfigSla &&) = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigSla(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer4RuleAttributesResponseBodyListenersConfigSla() = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigSla& operator=(const DescribeLayer4RuleAttributesResponseBodyListenersConfigSla &) = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfigSla& operator=(DescribeLayer4RuleAttributesResponseBodyListenersConfigSla &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cps_ != nullptr
        && this->cpsEnable_ != nullptr && this->maxconn_ != nullptr && this->maxconnEnable_ != nullptr; };
    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int32_t cps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfigSla& setCps(int32_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // cpsEnable Field Functions 
    bool hasCpsEnable() const { return this->cpsEnable_ != nullptr;};
    void deleteCpsEnable() { this->cpsEnable_ = nullptr;};
    inline int32_t cpsEnable() const { DARABONBA_PTR_GET_DEFAULT(cpsEnable_, 0) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfigSla& setCpsEnable(int32_t cpsEnable) { DARABONBA_PTR_SET_VALUE(cpsEnable_, cpsEnable) };


    // maxconn Field Functions 
    bool hasMaxconn() const { return this->maxconn_ != nullptr;};
    void deleteMaxconn() { this->maxconn_ = nullptr;};
    inline int32_t maxconn() const { DARABONBA_PTR_GET_DEFAULT(maxconn_, 0) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfigSla& setMaxconn(int32_t maxconn) { DARABONBA_PTR_SET_VALUE(maxconn_, maxconn) };


    // maxconnEnable Field Functions 
    bool hasMaxconnEnable() const { return this->maxconnEnable_ != nullptr;};
    void deleteMaxconnEnable() { this->maxconnEnable_ = nullptr;};
    inline int32_t maxconnEnable() const { DARABONBA_PTR_GET_DEFAULT(maxconnEnable_, 0) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfigSla& setMaxconnEnable(int32_t maxconnEnable) { DARABONBA_PTR_SET_VALUE(maxconnEnable_, maxconnEnable) };


  protected:
    std::shared_ptr<int32_t> cps_ = nullptr;
    std::shared_ptr<int32_t> cpsEnable_ = nullptr;
    std::shared_ptr<int32_t> maxconn_ = nullptr;
    std::shared_ptr<int32_t> maxconnEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
