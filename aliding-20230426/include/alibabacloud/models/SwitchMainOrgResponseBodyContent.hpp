// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHMAINORGRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_SWITCHMAINORGRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SwitchMainOrgResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchMainOrgResponseBodyContent& obj) { 
      DARABONBA_ANY_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchMainOrgResponseBodyContent& obj) { 
      DARABONBA_ANY_FROM_JSON(data, data_);
    };
    SwitchMainOrgResponseBodyContent() = default ;
    SwitchMainOrgResponseBodyContent(const SwitchMainOrgResponseBodyContent &) = default ;
    SwitchMainOrgResponseBodyContent(SwitchMainOrgResponseBodyContent &&) = default ;
    SwitchMainOrgResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchMainOrgResponseBodyContent() = default ;
    SwitchMainOrgResponseBodyContent& operator=(const SwitchMainOrgResponseBodyContent &) = default ;
    SwitchMainOrgResponseBodyContent& operator=(SwitchMainOrgResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline SwitchMainOrgResponseBodyContent& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline SwitchMainOrgResponseBodyContent& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


  protected:
    Darabonba::Json data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
