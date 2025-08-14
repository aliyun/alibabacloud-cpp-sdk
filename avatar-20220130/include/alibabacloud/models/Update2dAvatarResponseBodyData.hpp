// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATE2DAVATARRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATE2DAVATARRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class Update2dAvatarResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Update2dAvatarResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
    };
    friend void from_json(const Darabonba::Json& j, Update2dAvatarResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
    };
    Update2dAvatarResponseBodyData() = default ;
    Update2dAvatarResponseBodyData(const Update2dAvatarResponseBodyData &) = default ;
    Update2dAvatarResponseBodyData(Update2dAvatarResponseBodyData &&) = default ;
    Update2dAvatarResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Update2dAvatarResponseBodyData() = default ;
    Update2dAvatarResponseBodyData& operator=(const Update2dAvatarResponseBodyData &) = default ;
    Update2dAvatarResponseBodyData& operator=(Update2dAvatarResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline Update2dAvatarResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
