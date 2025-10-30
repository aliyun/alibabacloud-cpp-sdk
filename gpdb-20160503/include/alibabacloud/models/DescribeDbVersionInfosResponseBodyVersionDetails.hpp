// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBVERSIONINFOSRESPONSEBODYVERSIONDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBVERSIONINFOSRESPONSEBODYVERSIONDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBVersionInfosResponseBodyVersionDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBVersionInfosResponseBodyVersionDetails& obj) { 
      DARABONBA_ANY_TO_JSON(Serverless, serverless_);
      DARABONBA_ANY_TO_JSON(StorageElastic, storageElastic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBVersionInfosResponseBodyVersionDetails& obj) { 
      DARABONBA_ANY_FROM_JSON(Serverless, serverless_);
      DARABONBA_ANY_FROM_JSON(StorageElastic, storageElastic_);
    };
    DescribeDBVersionInfosResponseBodyVersionDetails() = default ;
    DescribeDBVersionInfosResponseBodyVersionDetails(const DescribeDBVersionInfosResponseBodyVersionDetails &) = default ;
    DescribeDBVersionInfosResponseBodyVersionDetails(DescribeDBVersionInfosResponseBodyVersionDetails &&) = default ;
    DescribeDBVersionInfosResponseBodyVersionDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBVersionInfosResponseBodyVersionDetails() = default ;
    DescribeDBVersionInfosResponseBodyVersionDetails& operator=(const DescribeDBVersionInfosResponseBodyVersionDetails &) = default ;
    DescribeDBVersionInfosResponseBodyVersionDetails& operator=(DescribeDBVersionInfosResponseBodyVersionDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serverless_ == nullptr
        && return this->storageElastic_ == nullptr; };
    // serverless Field Functions 
    bool hasServerless() const { return this->serverless_ != nullptr;};
    void deleteServerless() { this->serverless_ = nullptr;};
    inline     const Darabonba::Json & serverless() const { DARABONBA_GET(serverless_) };
    Darabonba::Json & serverless() { DARABONBA_GET(serverless_) };
    inline DescribeDBVersionInfosResponseBodyVersionDetails& setServerless(const Darabonba::Json & serverless) { DARABONBA_SET_VALUE(serverless_, serverless) };
    inline DescribeDBVersionInfosResponseBodyVersionDetails& setServerless(Darabonba::Json & serverless) { DARABONBA_SET_RVALUE(serverless_, serverless) };


    // storageElastic Field Functions 
    bool hasStorageElastic() const { return this->storageElastic_ != nullptr;};
    void deleteStorageElastic() { this->storageElastic_ = nullptr;};
    inline     const Darabonba::Json & storageElastic() const { DARABONBA_GET(storageElastic_) };
    Darabonba::Json & storageElastic() { DARABONBA_GET(storageElastic_) };
    inline DescribeDBVersionInfosResponseBodyVersionDetails& setStorageElastic(const Darabonba::Json & storageElastic) { DARABONBA_SET_VALUE(storageElastic_, storageElastic) };
    inline DescribeDBVersionInfosResponseBodyVersionDetails& setStorageElastic(Darabonba::Json & storageElastic) { DARABONBA_SET_RVALUE(storageElastic_, storageElastic) };


  protected:
    // The queried minor version information about the instance in Serverless mode.
    Darabonba::Json serverless_ = nullptr;
    // The queried minor version information about the instance in elastic storage mode.
    Darabonba::Json storageElastic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
