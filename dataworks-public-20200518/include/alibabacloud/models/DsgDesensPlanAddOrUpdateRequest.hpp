// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGDESENSPLANADDORUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGDESENSPLANADDORUPDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DsgDesensPlanAddOrUpdateRequestDesensRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgDesensPlanAddOrUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgDesensPlanAddOrUpdateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesensRules, desensRules_);
    };
    friend void from_json(const Darabonba::Json& j, DsgDesensPlanAddOrUpdateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesensRules, desensRules_);
    };
    DsgDesensPlanAddOrUpdateRequest() = default ;
    DsgDesensPlanAddOrUpdateRequest(const DsgDesensPlanAddOrUpdateRequest &) = default ;
    DsgDesensPlanAddOrUpdateRequest(DsgDesensPlanAddOrUpdateRequest &&) = default ;
    DsgDesensPlanAddOrUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgDesensPlanAddOrUpdateRequest() = default ;
    DsgDesensPlanAddOrUpdateRequest& operator=(const DsgDesensPlanAddOrUpdateRequest &) = default ;
    DsgDesensPlanAddOrUpdateRequest& operator=(DsgDesensPlanAddOrUpdateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desensRules_ != nullptr; };
    // desensRules Field Functions 
    bool hasDesensRules() const { return this->desensRules_ != nullptr;};
    void deleteDesensRules() { this->desensRules_ = nullptr;};
    inline const vector<DsgDesensPlanAddOrUpdateRequestDesensRules> & desensRules() const { DARABONBA_PTR_GET_CONST(desensRules_, vector<DsgDesensPlanAddOrUpdateRequestDesensRules>) };
    inline vector<DsgDesensPlanAddOrUpdateRequestDesensRules> desensRules() { DARABONBA_PTR_GET(desensRules_, vector<DsgDesensPlanAddOrUpdateRequestDesensRules>) };
    inline DsgDesensPlanAddOrUpdateRequest& setDesensRules(const vector<DsgDesensPlanAddOrUpdateRequestDesensRules> & desensRules) { DARABONBA_PTR_SET_VALUE(desensRules_, desensRules) };
    inline DsgDesensPlanAddOrUpdateRequest& setDesensRules(vector<DsgDesensPlanAddOrUpdateRequestDesensRules> && desensRules) { DARABONBA_PTR_SET_RVALUE(desensRules_, desensRules) };


  protected:
    // A collection of data masking rules that you want to add or modify.
    // 
    // This parameter is required.
    std::shared_ptr<vector<DsgDesensPlanAddOrUpdateRequestDesensRules>> desensRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
