// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPLOG_HPP_
#define ALIBABACLOUD_MODELS_PDPLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpLog& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, PdpLog& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(ip, ip_);
    };
    PdpLog() = default ;
    PdpLog(const PdpLog &) = default ;
    PdpLog(PdpLog &&) = default ;
    PdpLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpLog() = default ;
    PdpLog& operator=(const PdpLog &) = default ;
    PdpLog& operator=(PdpLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->ip_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline PdpLog& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline PdpLog& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<string> ip_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
