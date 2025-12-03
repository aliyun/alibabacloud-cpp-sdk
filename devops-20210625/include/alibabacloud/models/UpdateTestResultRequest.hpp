// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETESTRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETESTRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateTestResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTestResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(executor, executor_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTestResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(executor, executor_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    UpdateTestResultRequest() = default ;
    UpdateTestResultRequest(const UpdateTestResultRequest &) = default ;
    UpdateTestResultRequest(UpdateTestResultRequest &&) = default ;
    UpdateTestResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTestResultRequest() = default ;
    UpdateTestResultRequest& operator=(const UpdateTestResultRequest &) = default ;
    UpdateTestResultRequest& operator=(UpdateTestResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executor_ == nullptr
        && return this->status_ == nullptr; };
    // executor Field Functions 
    bool hasExecutor() const { return this->executor_ != nullptr;};
    void deleteExecutor() { this->executor_ = nullptr;};
    inline string executor() const { DARABONBA_PTR_GET_DEFAULT(executor_, "") };
    inline UpdateTestResultRequest& setExecutor(string executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateTestResultRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> executor_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
