// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESOURCETABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESOURCETABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListInstanceResourceTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResourceTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxcomputeSchema, maxcomputeSchema_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResourceTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxcomputeSchema, maxcomputeSchema_);
    };
    ListInstanceResourceTablesRequest() = default ;
    ListInstanceResourceTablesRequest(const ListInstanceResourceTablesRequest &) = default ;
    ListInstanceResourceTablesRequest(ListInstanceResourceTablesRequest &&) = default ;
    ListInstanceResourceTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResourceTablesRequest() = default ;
    ListInstanceResourceTablesRequest& operator=(const ListInstanceResourceTablesRequest &) = default ;
    ListInstanceResourceTablesRequest& operator=(ListInstanceResourceTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxcomputeSchema_ == nullptr; };
    // maxcomputeSchema Field Functions 
    bool hasMaxcomputeSchema() const { return this->maxcomputeSchema_ != nullptr;};
    void deleteMaxcomputeSchema() { this->maxcomputeSchema_ = nullptr;};
    inline string getMaxcomputeSchema() const { DARABONBA_PTR_GET_DEFAULT(maxcomputeSchema_, "") };
    inline ListInstanceResourceTablesRequest& setMaxcomputeSchema(string maxcomputeSchema) { DARABONBA_PTR_SET_VALUE(maxcomputeSchema_, maxcomputeSchema) };


  protected:
    shared_ptr<string> maxcomputeSchema_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
