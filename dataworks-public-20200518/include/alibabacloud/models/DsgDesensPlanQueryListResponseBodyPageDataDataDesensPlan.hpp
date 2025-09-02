// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGDESENSPLANQUERYLISTRESPONSEBODYPAGEDATADATADESENSPLAN_HPP_
#define ALIBABACLOUD_MODELS_DSGDESENSPLANQUERYLISTRESPONSEBODYPAGEDATADATADESENSPLAN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan& obj) { 
      DARABONBA_PTR_TO_JSON(DesensPlanType, desensPlanType_);
      DARABONBA_ANY_TO_JSON(ExtParam, extParam_);
    };
    friend void from_json(const Darabonba::Json& j, DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan& obj) { 
      DARABONBA_PTR_FROM_JSON(DesensPlanType, desensPlanType_);
      DARABONBA_ANY_FROM_JSON(ExtParam, extParam_);
    };
    DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan() = default ;
    DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan(const DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan &) = default ;
    DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan(DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan &&) = default ;
    DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan() = default ;
    DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan& operator=(const DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan &) = default ;
    DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan& operator=(DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desensPlanType_ != nullptr
        && this->extParam_ != nullptr; };
    // desensPlanType Field Functions 
    bool hasDesensPlanType() const { return this->desensPlanType_ != nullptr;};
    void deleteDesensPlanType() { this->desensPlanType_ = nullptr;};
    inline string desensPlanType() const { DARABONBA_PTR_GET_DEFAULT(desensPlanType_, "") };
    inline DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan& setDesensPlanType(string desensPlanType) { DARABONBA_PTR_SET_VALUE(desensPlanType_, desensPlanType) };


    // extParam Field Functions 
    bool hasExtParam() const { return this->extParam_ != nullptr;};
    void deleteExtParam() { this->extParam_ = nullptr;};
    inline     const Darabonba::Json & extParam() const { DARABONBA_GET(extParam_) };
    Darabonba::Json & extParam() { DARABONBA_GET(extParam_) };
    inline DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan& setExtParam(const Darabonba::Json & extParam) { DARABONBA_SET_VALUE(extParam_, extParam) };
    inline DsgDesensPlanQueryListResponseBodyPageDataDataDesensPlan& setExtParam(Darabonba::Json & extParam) { DARABONBA_SET_RVALUE(extParam_, extParam) };


  protected:
    // The type of the data masking rule.
    std::shared_ptr<string> desensPlanType_ = nullptr;
    // The parameters for the data masking rule. For more information about the parameters, see the [DsgDesensPlanAddOrUpdate](https://help.aliyun.com/document_detail/2786295.html) API reference.
    Darabonba::Json extParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
