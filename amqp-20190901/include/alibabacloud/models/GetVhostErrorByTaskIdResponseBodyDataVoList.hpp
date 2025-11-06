// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVHOSTERRORBYTASKIDRESPONSEBODYDATAVOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETVHOSTERRORBYTASKIDRESPONSEBODYDATAVOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetVhostErrorByTaskIdResponseBodyDataVoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVhostErrorByTaskIdResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_TO_JSON(VhostErrorDO, vhostErrorDO_);
    };
    friend void from_json(const Darabonba::Json& j, GetVhostErrorByTaskIdResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_FROM_JSON(VhostErrorDO, vhostErrorDO_);
    };
    GetVhostErrorByTaskIdResponseBodyDataVoList() = default ;
    GetVhostErrorByTaskIdResponseBodyDataVoList(const GetVhostErrorByTaskIdResponseBodyDataVoList &) = default ;
    GetVhostErrorByTaskIdResponseBodyDataVoList(GetVhostErrorByTaskIdResponseBodyDataVoList &&) = default ;
    GetVhostErrorByTaskIdResponseBodyDataVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVhostErrorByTaskIdResponseBodyDataVoList() = default ;
    GetVhostErrorByTaskIdResponseBodyDataVoList& operator=(const GetVhostErrorByTaskIdResponseBodyDataVoList &) = default ;
    GetVhostErrorByTaskIdResponseBodyDataVoList& operator=(GetVhostErrorByTaskIdResponseBodyDataVoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vhostErrorDO_ == nullptr; };
    // vhostErrorDO Field Functions 
    bool hasVhostErrorDO() const { return this->vhostErrorDO_ != nullptr;};
    void deleteVhostErrorDO() { this->vhostErrorDO_ = nullptr;};
    inline const vector<Models::GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO> & vhostErrorDO() const { DARABONBA_PTR_GET_CONST(vhostErrorDO_, vector<Models::GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO>) };
    inline vector<Models::GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO> vhostErrorDO() { DARABONBA_PTR_GET(vhostErrorDO_, vector<Models::GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO>) };
    inline GetVhostErrorByTaskIdResponseBodyDataVoList& setVhostErrorDO(const vector<Models::GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO> & vhostErrorDO) { DARABONBA_PTR_SET_VALUE(vhostErrorDO_, vhostErrorDO) };
    inline GetVhostErrorByTaskIdResponseBodyDataVoList& setVhostErrorDO(vector<Models::GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO> && vhostErrorDO) { DARABONBA_PTR_SET_RVALUE(vhostErrorDO_, vhostErrorDO) };


  protected:
    std::shared_ptr<vector<Models::GetVhostErrorByTaskIdResponseBodyDataVoListVhostErrorDO>> vhostErrorDO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
