// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSANITYCHECKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSANITYCHECKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetSanityCheckTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSanityCheckTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
    };
    friend void from_json(const Darabonba::Json& j, GetSanityCheckTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
    };
    GetSanityCheckTaskRequest() = default ;
    GetSanityCheckTaskRequest(const GetSanityCheckTaskRequest &) = default ;
    GetSanityCheckTaskRequest(GetSanityCheckTaskRequest &&) = default ;
    GetSanityCheckTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSanityCheckTaskRequest() = default ;
    GetSanityCheckTaskRequest& operator=(const GetSanityCheckTaskRequest &) = default ;
    GetSanityCheckTaskRequest& operator=(GetSanityCheckTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->verbose_ == nullptr; };
    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool getVerbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline GetSanityCheckTaskRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


  protected:
    shared_ptr<bool> verbose_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
