// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class GetFunctionCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
    };
    GetFunctionCodeRequest() = default ;
    GetFunctionCodeRequest(const GetFunctionCodeRequest &) = default ;
    GetFunctionCodeRequest(GetFunctionCodeRequest &&) = default ;
    GetFunctionCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionCodeRequest() = default ;
    GetFunctionCodeRequest& operator=(const GetFunctionCodeRequest &) = default ;
    GetFunctionCodeRequest& operator=(GetFunctionCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->qualifier_ == nullptr; };
    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline GetFunctionCodeRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


  protected:
    // The version or alias of the function.
    std::shared_ptr<string> qualifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
