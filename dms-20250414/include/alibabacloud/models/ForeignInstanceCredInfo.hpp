// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FOREIGNINSTANCECREDINFO_HPP_
#define ALIBABACLOUD_MODELS_FOREIGNINSTANCECREDINFO_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ForeignInstanceCredInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForeignInstanceCredInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CredInfo, credInfo_);
      DARABONBA_PTR_TO_JSON(CredType, credType_);
    };
    friend void from_json(const Darabonba::Json& j, ForeignInstanceCredInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CredInfo, credInfo_);
      DARABONBA_PTR_FROM_JSON(CredType, credType_);
    };
    ForeignInstanceCredInfo() = default ;
    ForeignInstanceCredInfo(const ForeignInstanceCredInfo &) = default ;
    ForeignInstanceCredInfo(ForeignInstanceCredInfo &&) = default ;
    ForeignInstanceCredInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForeignInstanceCredInfo() = default ;
    ForeignInstanceCredInfo& operator=(const ForeignInstanceCredInfo &) = default ;
    ForeignInstanceCredInfo& operator=(ForeignInstanceCredInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->credInfo_ != nullptr
        && this->credType_ != nullptr; };
    // credInfo Field Functions 
    bool hasCredInfo() const { return this->credInfo_ != nullptr;};
    void deleteCredInfo() { this->credInfo_ = nullptr;};
    inline const map<string, string> & credInfo() const { DARABONBA_PTR_GET_CONST(credInfo_, map<string, string>) };
    inline map<string, string> credInfo() { DARABONBA_PTR_GET(credInfo_, map<string, string>) };
    inline ForeignInstanceCredInfo& setCredInfo(const map<string, string> & credInfo) { DARABONBA_PTR_SET_VALUE(credInfo_, credInfo) };
    inline ForeignInstanceCredInfo& setCredInfo(map<string, string> && credInfo) { DARABONBA_PTR_SET_RVALUE(credInfo_, credInfo) };


    // credType Field Functions 
    bool hasCredType() const { return this->credType_ != nullptr;};
    void deleteCredType() { this->credType_ = nullptr;};
    inline string credType() const { DARABONBA_PTR_GET_DEFAULT(credType_, "") };
    inline ForeignInstanceCredInfo& setCredType(string credType) { DARABONBA_PTR_SET_VALUE(credType_, credType) };


  protected:
    std::shared_ptr<map<string, string>> credInfo_ = nullptr;
    std::shared_ptr<string> credType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
