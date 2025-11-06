// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBINDINGERRORBYTASKIDRESPONSEBODYDATAVOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETBINDINGERRORBYTASKIDRESPONSEBODYDATAVOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetBindingErrorByTaskIdResponseBodyDataVoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBindingErrorByTaskIdResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_TO_JSON(BindingErrorDO, bindingErrorDO_);
    };
    friend void from_json(const Darabonba::Json& j, GetBindingErrorByTaskIdResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_FROM_JSON(BindingErrorDO, bindingErrorDO_);
    };
    GetBindingErrorByTaskIdResponseBodyDataVoList() = default ;
    GetBindingErrorByTaskIdResponseBodyDataVoList(const GetBindingErrorByTaskIdResponseBodyDataVoList &) = default ;
    GetBindingErrorByTaskIdResponseBodyDataVoList(GetBindingErrorByTaskIdResponseBodyDataVoList &&) = default ;
    GetBindingErrorByTaskIdResponseBodyDataVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBindingErrorByTaskIdResponseBodyDataVoList() = default ;
    GetBindingErrorByTaskIdResponseBodyDataVoList& operator=(const GetBindingErrorByTaskIdResponseBodyDataVoList &) = default ;
    GetBindingErrorByTaskIdResponseBodyDataVoList& operator=(GetBindingErrorByTaskIdResponseBodyDataVoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindingErrorDO_ == nullptr; };
    // bindingErrorDO Field Functions 
    bool hasBindingErrorDO() const { return this->bindingErrorDO_ != nullptr;};
    void deleteBindingErrorDO() { this->bindingErrorDO_ = nullptr;};
    inline const vector<Models::GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO> & bindingErrorDO() const { DARABONBA_PTR_GET_CONST(bindingErrorDO_, vector<Models::GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO>) };
    inline vector<Models::GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO> bindingErrorDO() { DARABONBA_PTR_GET(bindingErrorDO_, vector<Models::GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO>) };
    inline GetBindingErrorByTaskIdResponseBodyDataVoList& setBindingErrorDO(const vector<Models::GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO> & bindingErrorDO) { DARABONBA_PTR_SET_VALUE(bindingErrorDO_, bindingErrorDO) };
    inline GetBindingErrorByTaskIdResponseBodyDataVoList& setBindingErrorDO(vector<Models::GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO> && bindingErrorDO) { DARABONBA_PTR_SET_RVALUE(bindingErrorDO_, bindingErrorDO) };


  protected:
    std::shared_ptr<vector<Models::GetBindingErrorByTaskIdResponseBodyDataVoListBindingErrorDO>> bindingErrorDO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
