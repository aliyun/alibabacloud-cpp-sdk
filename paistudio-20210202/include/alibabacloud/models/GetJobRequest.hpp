// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
    };
    GetJobRequest() = default ;
    GetJobRequest(const GetJobRequest &) = default ;
    GetJobRequest(GetJobRequest &&) = default ;
    GetJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobRequest() = default ;
    GetJobRequest& operator=(const GetJobRequest &) = default ;
    GetJobRequest& operator=(GetJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->verbose_ == nullptr; };
    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool verbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline GetJobRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


  protected:
    std::shared_ptr<bool> verbose_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
