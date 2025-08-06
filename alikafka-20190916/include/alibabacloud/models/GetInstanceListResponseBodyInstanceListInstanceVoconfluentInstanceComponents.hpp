// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELISTINSTANCEVOCONFLUENTINSTANCECOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELISTINSTANCEVOCONFLUENTINSTANCECOMPONENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents& obj) { 
      DARABONBA_PTR_TO_JSON(ConfluentInstanceComponentVO, confluentInstanceComponentVO_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfluentInstanceComponentVO, confluentInstanceComponentVO_);
    };
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents() = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents(const GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents &) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents(GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents &&) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents() = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents& operator=(const GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents &) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents& operator=(GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confluentInstanceComponentVO_ != nullptr; };
    // confluentInstanceComponentVO Field Functions 
    bool hasConfluentInstanceComponentVO() const { return this->confluentInstanceComponentVO_ != nullptr;};
    void deleteConfluentInstanceComponentVO() { this->confluentInstanceComponentVO_ = nullptr;};
    inline const vector<Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO> & confluentInstanceComponentVO() const { DARABONBA_PTR_GET_CONST(confluentInstanceComponentVO_, vector<Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO>) };
    inline vector<Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO> confluentInstanceComponentVO() { DARABONBA_PTR_GET(confluentInstanceComponentVO_, vector<Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO>) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents& setConfluentInstanceComponentVO(const vector<Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO> & confluentInstanceComponentVO) { DARABONBA_PTR_SET_VALUE(confluentInstanceComponentVO_, confluentInstanceComponentVO) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents& setConfluentInstanceComponentVO(vector<Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO> && confluentInstanceComponentVO) { DARABONBA_PTR_SET_RVALUE(confluentInstanceComponentVO_, confluentInstanceComponentVO) };


  protected:
    std::shared_ptr<vector<Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO>> confluentInstanceComponentVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
