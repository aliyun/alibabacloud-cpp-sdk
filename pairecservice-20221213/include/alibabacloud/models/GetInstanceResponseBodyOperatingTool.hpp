// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYOPERATINGTOOL_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYOPERATINGTOOL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetInstanceResponseBodyOperatingTool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyOperatingTool& obj) { 
      DARABONBA_PTR_TO_JSON(IsEnable, isEnable_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyOperatingTool& obj) { 
      DARABONBA_PTR_FROM_JSON(IsEnable, isEnable_);
    };
    GetInstanceResponseBodyOperatingTool() = default ;
    GetInstanceResponseBodyOperatingTool(const GetInstanceResponseBodyOperatingTool &) = default ;
    GetInstanceResponseBodyOperatingTool(GetInstanceResponseBodyOperatingTool &&) = default ;
    GetInstanceResponseBodyOperatingTool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyOperatingTool() = default ;
    GetInstanceResponseBodyOperatingTool& operator=(const GetInstanceResponseBodyOperatingTool &) = default ;
    GetInstanceResponseBodyOperatingTool& operator=(GetInstanceResponseBodyOperatingTool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isEnable_ != nullptr; };
    // isEnable Field Functions 
    bool hasIsEnable() const { return this->isEnable_ != nullptr;};
    void deleteIsEnable() { this->isEnable_ = nullptr;};
    inline bool isEnable() const { DARABONBA_PTR_GET_DEFAULT(isEnable_, false) };
    inline GetInstanceResponseBodyOperatingTool& setIsEnable(bool isEnable) { DARABONBA_PTR_SET_VALUE(isEnable_, isEnable) };


  protected:
    std::shared_ptr<bool> isEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
