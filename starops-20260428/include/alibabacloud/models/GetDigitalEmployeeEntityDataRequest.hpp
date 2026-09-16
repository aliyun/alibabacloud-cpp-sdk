// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIGITALEMPLOYEEENTITYDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDIGITALEMPLOYEEENTITYDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class GetDigitalEmployeeEntityDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDigitalEmployeeEntityDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(from, from_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(to, to_);
    };
    friend void from_json(const Darabonba::Json& j, GetDigitalEmployeeEntityDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(from, from_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(to, to_);
    };
    GetDigitalEmployeeEntityDataRequest() = default ;
    GetDigitalEmployeeEntityDataRequest(const GetDigitalEmployeeEntityDataRequest &) = default ;
    GetDigitalEmployeeEntityDataRequest(GetDigitalEmployeeEntityDataRequest &&) = default ;
    GetDigitalEmployeeEntityDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDigitalEmployeeEntityDataRequest() = default ;
    GetDigitalEmployeeEntityDataRequest& operator=(const GetDigitalEmployeeEntityDataRequest &) = default ;
    GetDigitalEmployeeEntityDataRequest& operator=(GetDigitalEmployeeEntityDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && this->query_ == nullptr && this->to_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline GetDigitalEmployeeEntityDataRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline GetDigitalEmployeeEntityDataRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline GetDigitalEmployeeEntityDataRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The UNIX timestamp, in seconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> from_ {};
    // Only the .entity or .topo semantic sources of the current digital employee can be queried. Explicit access to internal storage or external data sources is prohibited.
    // 
    // This parameter is required.
    shared_ptr<string> query_ {};
    // The UNIX timestamp, in seconds. The value must be greater than the value of from.
    // 
    // This parameter is required.
    shared_ptr<int64_t> to_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
