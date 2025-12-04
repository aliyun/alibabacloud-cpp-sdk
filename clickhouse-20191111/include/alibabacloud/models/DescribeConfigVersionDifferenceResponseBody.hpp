// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGVERSIONDIFFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGVERSIONDIFFERENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeConfigVersionDifferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigVersionDifferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NewConfigXML, newConfigXML_);
      DARABONBA_PTR_TO_JSON(OldConfigXML, oldConfigXML_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigVersionDifferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NewConfigXML, newConfigXML_);
      DARABONBA_PTR_FROM_JSON(OldConfigXML, oldConfigXML_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeConfigVersionDifferenceResponseBody() = default ;
    DescribeConfigVersionDifferenceResponseBody(const DescribeConfigVersionDifferenceResponseBody &) = default ;
    DescribeConfigVersionDifferenceResponseBody(DescribeConfigVersionDifferenceResponseBody &&) = default ;
    DescribeConfigVersionDifferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigVersionDifferenceResponseBody() = default ;
    DescribeConfigVersionDifferenceResponseBody& operator=(const DescribeConfigVersionDifferenceResponseBody &) = default ;
    DescribeConfigVersionDifferenceResponseBody& operator=(DescribeConfigVersionDifferenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newConfigXML_ == nullptr
        && return this->oldConfigXML_ == nullptr && return this->requestId_ == nullptr; };
    // newConfigXML Field Functions 
    bool hasNewConfigXML() const { return this->newConfigXML_ != nullptr;};
    void deleteNewConfigXML() { this->newConfigXML_ = nullptr;};
    inline string newConfigXML() const { DARABONBA_PTR_GET_DEFAULT(newConfigXML_, "") };
    inline DescribeConfigVersionDifferenceResponseBody& setNewConfigXML(string newConfigXML) { DARABONBA_PTR_SET_VALUE(newConfigXML_, newConfigXML) };


    // oldConfigXML Field Functions 
    bool hasOldConfigXML() const { return this->oldConfigXML_ != nullptr;};
    void deleteOldConfigXML() { this->oldConfigXML_ = nullptr;};
    inline string oldConfigXML() const { DARABONBA_PTR_GET_DEFAULT(oldConfigXML_, "") };
    inline DescribeConfigVersionDifferenceResponseBody& setOldConfigXML(string oldConfigXML) { DARABONBA_PTR_SET_VALUE(oldConfigXML_, oldConfigXML) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConfigVersionDifferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The values of the configuration parameters after the values of the configuration parameters are changed.
    std::shared_ptr<string> newConfigXML_ = nullptr;
    // The values of the configuration parameters before the values of the configuration parameters are changed.
    std::shared_ptr<string> oldConfigXML_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
