// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceListResponseBodyInstanceListInstanceVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetInstanceListResponseBodyInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceListResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceVO, instanceVO_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceListResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceVO, instanceVO_);
    };
    GetInstanceListResponseBodyInstanceList() = default ;
    GetInstanceListResponseBodyInstanceList(const GetInstanceListResponseBodyInstanceList &) = default ;
    GetInstanceListResponseBodyInstanceList(GetInstanceListResponseBodyInstanceList &&) = default ;
    GetInstanceListResponseBodyInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceListResponseBodyInstanceList() = default ;
    GetInstanceListResponseBodyInstanceList& operator=(const GetInstanceListResponseBodyInstanceList &) = default ;
    GetInstanceListResponseBodyInstanceList& operator=(GetInstanceListResponseBodyInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceVO_ == nullptr; };
    // instanceVO Field Functions 
    bool hasInstanceVO() const { return this->instanceVO_ != nullptr;};
    void deleteInstanceVO() { this->instanceVO_ = nullptr;};
    inline const vector<Models::GetInstanceListResponseBodyInstanceListInstanceVO> & instanceVO() const { DARABONBA_PTR_GET_CONST(instanceVO_, vector<Models::GetInstanceListResponseBodyInstanceListInstanceVO>) };
    inline vector<Models::GetInstanceListResponseBodyInstanceListInstanceVO> instanceVO() { DARABONBA_PTR_GET(instanceVO_, vector<Models::GetInstanceListResponseBodyInstanceListInstanceVO>) };
    inline GetInstanceListResponseBodyInstanceList& setInstanceVO(const vector<Models::GetInstanceListResponseBodyInstanceListInstanceVO> & instanceVO) { DARABONBA_PTR_SET_VALUE(instanceVO_, instanceVO) };
    inline GetInstanceListResponseBodyInstanceList& setInstanceVO(vector<Models::GetInstanceListResponseBodyInstanceListInstanceVO> && instanceVO) { DARABONBA_PTR_SET_RVALUE(instanceVO_, instanceVO) };


  protected:
    std::shared_ptr<vector<Models::GetInstanceListResponseBodyInstanceListInstanceVO>> instanceVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
