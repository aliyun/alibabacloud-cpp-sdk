// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELTYPEDETERMINERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODELTYPEDETERMINERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class ModelTypeDetermineResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelTypeDetermineResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(followUp, followUp_);
      DARABONBA_PTR_TO_JSON(rewriteText, rewriteText_);
      DARABONBA_PTR_TO_JSON(vl, vl_);
    };
    friend void from_json(const Darabonba::Json& j, ModelTypeDetermineResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(followUp, followUp_);
      DARABONBA_PTR_FROM_JSON(rewriteText, rewriteText_);
      DARABONBA_PTR_FROM_JSON(vl, vl_);
    };
    ModelTypeDetermineResponseBodyData() = default ;
    ModelTypeDetermineResponseBodyData(const ModelTypeDetermineResponseBodyData &) = default ;
    ModelTypeDetermineResponseBodyData(ModelTypeDetermineResponseBodyData &&) = default ;
    ModelTypeDetermineResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelTypeDetermineResponseBodyData() = default ;
    ModelTypeDetermineResponseBodyData& operator=(const ModelTypeDetermineResponseBodyData &) = default ;
    ModelTypeDetermineResponseBodyData& operator=(ModelTypeDetermineResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->followUp_ == nullptr
        && return this->rewriteText_ == nullptr && return this->vl_ == nullptr; };
    // followUp Field Functions 
    bool hasFollowUp() const { return this->followUp_ != nullptr;};
    void deleteFollowUp() { this->followUp_ = nullptr;};
    inline bool followUp() const { DARABONBA_PTR_GET_DEFAULT(followUp_, false) };
    inline ModelTypeDetermineResponseBodyData& setFollowUp(bool followUp) { DARABONBA_PTR_SET_VALUE(followUp_, followUp) };


    // rewriteText Field Functions 
    bool hasRewriteText() const { return this->rewriteText_ != nullptr;};
    void deleteRewriteText() { this->rewriteText_ = nullptr;};
    inline string rewriteText() const { DARABONBA_PTR_GET_DEFAULT(rewriteText_, "") };
    inline ModelTypeDetermineResponseBodyData& setRewriteText(string rewriteText) { DARABONBA_PTR_SET_VALUE(rewriteText_, rewriteText) };


    // vl Field Functions 
    bool hasVl() const { return this->vl_ != nullptr;};
    void deleteVl() { this->vl_ = nullptr;};
    inline bool vl() const { DARABONBA_PTR_GET_DEFAULT(vl_, false) };
    inline ModelTypeDetermineResponseBodyData& setVl(bool vl) { DARABONBA_PTR_SET_VALUE(vl_, vl) };


  protected:
    std::shared_ptr<bool> followUp_ = nullptr;
    std::shared_ptr<string> rewriteText_ = nullptr;
    std::shared_ptr<bool> vl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
