// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRETCODESHAREURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRETCODESHAREURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class GetRetcodeShareUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRetcodeShareUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Pid, pid_);
    };
    friend void from_json(const Darabonba::Json& j, GetRetcodeShareUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
    };
    GetRetcodeShareUrlRequest() = default ;
    GetRetcodeShareUrlRequest(const GetRetcodeShareUrlRequest &) = default ;
    GetRetcodeShareUrlRequest(GetRetcodeShareUrlRequest &&) = default ;
    GetRetcodeShareUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRetcodeShareUrlRequest() = default ;
    GetRetcodeShareUrlRequest& operator=(const GetRetcodeShareUrlRequest &) = default ;
    GetRetcodeShareUrlRequest& operator=(GetRetcodeShareUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pid_ == nullptr; };
    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetRetcodeShareUrlRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


  protected:
    // This parameter is required.
    shared_ptr<string> pid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
