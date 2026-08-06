// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCRAWLERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCRAWLERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RunCrawlerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCrawlerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, RunCrawlerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    RunCrawlerRequest() = default ;
    RunCrawlerRequest(const RunCrawlerRequest &) = default ;
    RunCrawlerRequest(RunCrawlerRequest &&) = default ;
    RunCrawlerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCrawlerRequest() = default ;
    RunCrawlerRequest& operator=(const RunCrawlerRequest &) = default ;
    RunCrawlerRequest& operator=(RunCrawlerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RunCrawlerRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
