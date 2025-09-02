// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERLINEAGERELATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERLINEAGERELATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class RegisterLineageRelationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterLineageRelationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LineageRelationRegisterVO, lineageRelationRegisterVOShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterLineageRelationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LineageRelationRegisterVO, lineageRelationRegisterVOShrink_);
    };
    RegisterLineageRelationShrinkRequest() = default ;
    RegisterLineageRelationShrinkRequest(const RegisterLineageRelationShrinkRequest &) = default ;
    RegisterLineageRelationShrinkRequest(RegisterLineageRelationShrinkRequest &&) = default ;
    RegisterLineageRelationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterLineageRelationShrinkRequest() = default ;
    RegisterLineageRelationShrinkRequest& operator=(const RegisterLineageRelationShrinkRequest &) = default ;
    RegisterLineageRelationShrinkRequest& operator=(RegisterLineageRelationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lineageRelationRegisterVOShrink_ != nullptr; };
    // lineageRelationRegisterVOShrink Field Functions 
    bool hasLineageRelationRegisterVOShrink() const { return this->lineageRelationRegisterVOShrink_ != nullptr;};
    void deleteLineageRelationRegisterVOShrink() { this->lineageRelationRegisterVOShrink_ = nullptr;};
    inline string lineageRelationRegisterVOShrink() const { DARABONBA_PTR_GET_DEFAULT(lineageRelationRegisterVOShrink_, "") };
    inline RegisterLineageRelationShrinkRequest& setLineageRelationRegisterVOShrink(string lineageRelationRegisterVOShrink) { DARABONBA_PTR_SET_VALUE(lineageRelationRegisterVOShrink_, lineageRelationRegisterVOShrink) };


  protected:
    // The structure whose lineage you want to register to DataWorks.
    // 
    // This parameter is required.
    std::shared_ptr<string> lineageRelationRegisterVOShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
