// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSENDDETAILSRESPONSEBODYSMSSENDDETAILDTOS_HPP_
#define ALIBABACLOUD_MODELS_QUERYSENDDETAILSRESPONSEBODYSMSSENDDETAILDTOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySendDetailsResponseBodySmsSendDetailDTOs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySendDetailsResponseBodySmsSendDetailDTOs& obj) { 
      DARABONBA_PTR_TO_JSON(SmsSendDetailDTO, smsSendDetailDTO_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySendDetailsResponseBodySmsSendDetailDTOs& obj) { 
      DARABONBA_PTR_FROM_JSON(SmsSendDetailDTO, smsSendDetailDTO_);
    };
    QuerySendDetailsResponseBodySmsSendDetailDTOs() = default ;
    QuerySendDetailsResponseBodySmsSendDetailDTOs(const QuerySendDetailsResponseBodySmsSendDetailDTOs &) = default ;
    QuerySendDetailsResponseBodySmsSendDetailDTOs(QuerySendDetailsResponseBodySmsSendDetailDTOs &&) = default ;
    QuerySendDetailsResponseBodySmsSendDetailDTOs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySendDetailsResponseBodySmsSendDetailDTOs() = default ;
    QuerySendDetailsResponseBodySmsSendDetailDTOs& operator=(const QuerySendDetailsResponseBodySmsSendDetailDTOs &) = default ;
    QuerySendDetailsResponseBodySmsSendDetailDTOs& operator=(QuerySendDetailsResponseBodySmsSendDetailDTOs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->smsSendDetailDTO_ != nullptr; };
    // smsSendDetailDTO Field Functions 
    bool hasSmsSendDetailDTO() const { return this->smsSendDetailDTO_ != nullptr;};
    void deleteSmsSendDetailDTO() { this->smsSendDetailDTO_ = nullptr;};
    inline const vector<Models::QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO> & smsSendDetailDTO() const { DARABONBA_PTR_GET_CONST(smsSendDetailDTO_, vector<Models::QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO>) };
    inline vector<Models::QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO> smsSendDetailDTO() { DARABONBA_PTR_GET(smsSendDetailDTO_, vector<Models::QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO>) };
    inline QuerySendDetailsResponseBodySmsSendDetailDTOs& setSmsSendDetailDTO(const vector<Models::QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO> & smsSendDetailDTO) { DARABONBA_PTR_SET_VALUE(smsSendDetailDTO_, smsSendDetailDTO) };
    inline QuerySendDetailsResponseBodySmsSendDetailDTOs& setSmsSendDetailDTO(vector<Models::QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO> && smsSendDetailDTO) { DARABONBA_PTR_SET_RVALUE(smsSendDetailDTO_, smsSendDetailDTO) };


  protected:
    std::shared_ptr<vector<Models::QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO>> smsSendDetailDTO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
