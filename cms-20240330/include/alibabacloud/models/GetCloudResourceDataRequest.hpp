// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDRESOURCEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDRESOURCEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetCloudResourceDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudResourceDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(from, from_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(to, to_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudResourceDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(from, from_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(to, to_);
    };
    GetCloudResourceDataRequest() = default ;
    GetCloudResourceDataRequest(const GetCloudResourceDataRequest &) = default ;
    GetCloudResourceDataRequest(GetCloudResourceDataRequest &&) = default ;
    GetCloudResourceDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudResourceDataRequest() = default ;
    GetCloudResourceDataRequest& operator=(const GetCloudResourceDataRequest &) = default ;
    GetCloudResourceDataRequest& operator=(GetCloudResourceDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && this->query_ == nullptr && this->to_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline GetCloudResourceDataRequest& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline GetCloudResourceDataRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int32_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
    inline GetCloudResourceDataRequest& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> from_ {};
    // This parameter is required.
    shared_ptr<string> query_ {};
    // This parameter is required.
    shared_ptr<int32_t> to_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
