// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpSeq, opSeq_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
    };
    friend void from_json(const Darabonba::Json& j, ListDagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpSeq, opSeq_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
    };
    ListDagsRequest() = default ;
    ListDagsRequest(const ListDagsRequest &) = default ;
    ListDagsRequest(ListDagsRequest &&) = default ;
    ListDagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDagsRequest() = default ;
    ListDagsRequest& operator=(const ListDagsRequest &) = default ;
    ListDagsRequest& operator=(ListDagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opSeq_ != nullptr
        && this->projectEnv_ != nullptr; };
    // opSeq Field Functions 
    bool hasOpSeq() const { return this->opSeq_ != nullptr;};
    void deleteOpSeq() { this->opSeq_ = nullptr;};
    inline int64_t opSeq() const { DARABONBA_PTR_GET_DEFAULT(opSeq_, 0L) };
    inline ListDagsRequest& setOpSeq(int64_t opSeq) { DARABONBA_PTR_SET_VALUE(opSeq_, opSeq) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline ListDagsRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


  protected:
    // The sequence number that uniquely identifies the data backfill operation. You can call the [GetDag](https://help.aliyun.com/document_detail/189753.html) operation to query the sequence number.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> opSeq_ = nullptr;
    // The environment of the workspace. Valid values: PROD and DEV. The value PROD indicates the production environment, and the value DEV indicates the development environment.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
