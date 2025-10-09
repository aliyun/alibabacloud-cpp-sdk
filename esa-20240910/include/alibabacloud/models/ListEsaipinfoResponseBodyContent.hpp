// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTESAIPINFORESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTESAIPINFORESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListESAIPInfoResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListESAIPInfoResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(CdnIp, cdnIp_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, ListESAIPInfoResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnIp, cdnIp_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
    };
    ListESAIPInfoResponseBodyContent() = default ;
    ListESAIPInfoResponseBodyContent(const ListESAIPInfoResponseBodyContent &) = default ;
    ListESAIPInfoResponseBodyContent(ListESAIPInfoResponseBodyContent &&) = default ;
    ListESAIPInfoResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListESAIPInfoResponseBodyContent() = default ;
    ListESAIPInfoResponseBodyContent& operator=(const ListESAIPInfoResponseBodyContent &) = default ;
    ListESAIPInfoResponseBodyContent& operator=(ListESAIPInfoResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cdnIp_ != nullptr
        && this->ip_ != nullptr; };
    // cdnIp Field Functions 
    bool hasCdnIp() const { return this->cdnIp_ != nullptr;};
    void deleteCdnIp() { this->cdnIp_ = nullptr;};
    inline string cdnIp() const { DARABONBA_PTR_GET_DEFAULT(cdnIp_, "") };
    inline ListESAIPInfoResponseBodyContent& setCdnIp(string cdnIp) { DARABONBA_PTR_SET_VALUE(cdnIp_, cdnIp) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ListESAIPInfoResponseBodyContent& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    // Whether the IP address in the parameter belongs to ESA POPs.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> cdnIp_ = nullptr;
    // The IP addresses.
    std::shared_ptr<string> ip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
