// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALSYSOMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITIALSYSOMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class InitialSysomRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitialSysomRequest& obj) { 
      DARABONBA_PTR_TO_JSON(check_only, checkOnly_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, InitialSysomRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(check_only, checkOnly_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    InitialSysomRequest() = default ;
    InitialSysomRequest(const InitialSysomRequest &) = default ;
    InitialSysomRequest(InitialSysomRequest &&) = default ;
    InitialSysomRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitialSysomRequest() = default ;
    InitialSysomRequest& operator=(const InitialSysomRequest &) = default ;
    InitialSysomRequest& operator=(InitialSysomRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkOnly_ != nullptr
        && this->source_ != nullptr; };
    // checkOnly Field Functions 
    bool hasCheckOnly() const { return this->checkOnly_ != nullptr;};
    void deleteCheckOnly() { this->checkOnly_ = nullptr;};
    inline bool checkOnly() const { DARABONBA_PTR_GET_DEFAULT(checkOnly_, false) };
    inline InitialSysomRequest& setCheckOnly(bool checkOnly) { DARABONBA_PTR_SET_VALUE(checkOnly_, checkOnly) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline InitialSysomRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    std::shared_ptr<bool> checkOnly_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
