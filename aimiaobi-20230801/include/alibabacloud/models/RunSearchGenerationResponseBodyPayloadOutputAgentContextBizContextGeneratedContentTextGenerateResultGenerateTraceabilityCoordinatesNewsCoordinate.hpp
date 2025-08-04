// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTTEXTGENERATERESULTGENERATETRACEABILITYCOORDINATESNEWSCOORDINATE_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTTEXTGENERATERESULTGENERATETRACEABILITYCOORDINATESNEWSCOORDINATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate& obj) { 
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
      DARABONBA_PTR_TO_JSON(Z, z_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate& obj) { 
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
      DARABONBA_PTR_FROM_JSON(Z, z_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->x_ != nullptr
        && this->y_ != nullptr && this->z_ != nullptr; };
    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline int32_t x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline int32_t y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    // z Field Functions 
    bool hasZ() const { return this->z_ != nullptr;};
    void deleteZ() { this->z_ = nullptr;};
    inline int32_t z() const { DARABONBA_PTR_GET_DEFAULT(z_, 0) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentTextGenerateResultGenerateTraceabilityCoordinatesNewsCoordinate& setZ(int32_t z) { DARABONBA_PTR_SET_VALUE(z_, z) };


  protected:
    std::shared_ptr<int32_t> x_ = nullptr;
    std::shared_ptr<int32_t> y_ = nullptr;
    std::shared_ptr<int32_t> z_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
