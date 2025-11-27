// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODYPORTMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODYPORTMAPPINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeRenderingInstanceResponseBodyPortMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingInstanceResponseBodyPortMappings& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingInstanceResponseBodyPortMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
    };
    DescribeRenderingInstanceResponseBodyPortMappings() = default ;
    DescribeRenderingInstanceResponseBodyPortMappings(const DescribeRenderingInstanceResponseBodyPortMappings &) = default ;
    DescribeRenderingInstanceResponseBodyPortMappings(DescribeRenderingInstanceResponseBodyPortMappings &&) = default ;
    DescribeRenderingInstanceResponseBodyPortMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingInstanceResponseBodyPortMappings() = default ;
    DescribeRenderingInstanceResponseBodyPortMappings& operator=(const DescribeRenderingInstanceResponseBodyPortMappings &) = default ;
    DescribeRenderingInstanceResponseBodyPortMappings& operator=(DescribeRenderingInstanceResponseBodyPortMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalPort_ == nullptr
        && return this->internalPort_ == nullptr; };
    // externalPort Field Functions 
    bool hasExternalPort() const { return this->externalPort_ != nullptr;};
    void deleteExternalPort() { this->externalPort_ = nullptr;};
    inline string externalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
    inline DescribeRenderingInstanceResponseBodyPortMappings& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


    // internalPort Field Functions 
    bool hasInternalPort() const { return this->internalPort_ != nullptr;};
    void deleteInternalPort() { this->internalPort_ = nullptr;};
    inline string internalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
    inline DescribeRenderingInstanceResponseBodyPortMappings& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


  protected:
    std::shared_ptr<string> externalPort_ = nullptr;
    std::shared_ptr<string> internalPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
