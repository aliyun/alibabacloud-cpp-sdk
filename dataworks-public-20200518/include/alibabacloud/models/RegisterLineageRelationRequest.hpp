// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERLINEAGERELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERLINEAGERELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LineageRelationRegisterVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class RegisterLineageRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterLineageRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LineageRelationRegisterVO, lineageRelationRegisterVO_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterLineageRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LineageRelationRegisterVO, lineageRelationRegisterVO_);
    };
    RegisterLineageRelationRequest() = default ;
    RegisterLineageRelationRequest(const RegisterLineageRelationRequest &) = default ;
    RegisterLineageRelationRequest(RegisterLineageRelationRequest &&) = default ;
    RegisterLineageRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterLineageRelationRequest() = default ;
    RegisterLineageRelationRequest& operator=(const RegisterLineageRelationRequest &) = default ;
    RegisterLineageRelationRequest& operator=(RegisterLineageRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lineageRelationRegisterVO_ != nullptr; };
    // lineageRelationRegisterVO Field Functions 
    bool hasLineageRelationRegisterVO() const { return this->lineageRelationRegisterVO_ != nullptr;};
    void deleteLineageRelationRegisterVO() { this->lineageRelationRegisterVO_ = nullptr;};
    inline const LineageRelationRegisterVO & lineageRelationRegisterVO() const { DARABONBA_PTR_GET_CONST(lineageRelationRegisterVO_, LineageRelationRegisterVO) };
    inline LineageRelationRegisterVO lineageRelationRegisterVO() { DARABONBA_PTR_GET(lineageRelationRegisterVO_, LineageRelationRegisterVO) };
    inline RegisterLineageRelationRequest& setLineageRelationRegisterVO(const LineageRelationRegisterVO & lineageRelationRegisterVO) { DARABONBA_PTR_SET_VALUE(lineageRelationRegisterVO_, lineageRelationRegisterVO) };
    inline RegisterLineageRelationRequest& setLineageRelationRegisterVO(LineageRelationRegisterVO && lineageRelationRegisterVO) { DARABONBA_PTR_SET_RVALUE(lineageRelationRegisterVO_, lineageRelationRegisterVO) };


  protected:
    // The structure whose lineage you want to register to DataWorks.
    // 
    // This parameter is required.
    std::shared_ptr<LineageRelationRegisterVO> lineageRelationRegisterVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
