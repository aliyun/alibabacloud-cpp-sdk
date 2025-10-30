// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXBCALLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BINDAXBCALLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAXBCallResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAXBCallResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BindId, bindId_);
    };
    friend void from_json(const Darabonba::Json& j, BindAXBCallResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BindId, bindId_);
    };
    BindAXBCallResponseBodyData() = default ;
    BindAXBCallResponseBodyData(const BindAXBCallResponseBodyData &) = default ;
    BindAXBCallResponseBodyData(BindAXBCallResponseBodyData &&) = default ;
    BindAXBCallResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAXBCallResponseBodyData() = default ;
    BindAXBCallResponseBodyData& operator=(const BindAXBCallResponseBodyData &) = default ;
    BindAXBCallResponseBodyData& operator=(BindAXBCallResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindId_ == nullptr; };
    // bindId Field Functions 
    bool hasBindId() const { return this->bindId_ != nullptr;};
    void deleteBindId() { this->bindId_ = nullptr;};
    inline string bindId() const { DARABONBA_PTR_GET_DEFAULT(bindId_, "") };
    inline BindAXBCallResponseBodyData& setBindId(string bindId) { DARABONBA_PTR_SET_VALUE(bindId_, bindId) };


  protected:
    // 绑定关系ID
    std::shared_ptr<string> bindId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
