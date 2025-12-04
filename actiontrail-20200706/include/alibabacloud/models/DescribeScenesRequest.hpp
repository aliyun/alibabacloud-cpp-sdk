// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeScenesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScenesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SearchCode, searchCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScenesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SearchCode, searchCode_);
    };
    DescribeScenesRequest() = default ;
    DescribeScenesRequest(const DescribeScenesRequest &) = default ;
    DescribeScenesRequest(DescribeScenesRequest &&) = default ;
    DescribeScenesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScenesRequest() = default ;
    DescribeScenesRequest& operator=(const DescribeScenesRequest &) = default ;
    DescribeScenesRequest& operator=(DescribeScenesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->searchCode_ == nullptr; };
    // searchCode Field Functions 
    bool hasSearchCode() const { return this->searchCode_ != nullptr;};
    void deleteSearchCode() { this->searchCode_ = nullptr;};
    inline string searchCode() const { DARABONBA_PTR_GET_DEFAULT(searchCode_, "") };
    inline DescribeScenesRequest& setSearchCode(string searchCode) { DARABONBA_PTR_SET_VALUE(searchCode_, searchCode) };


  protected:
    std::shared_ptr<string> searchCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
